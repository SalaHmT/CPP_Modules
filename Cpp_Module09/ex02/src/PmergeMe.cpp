/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:29:04 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/19 20:12:49 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"
/****************************************************************************************************/
PmergeMe::PmergeMe(){};
/****************************************************************************************************/
PmergeMe::~PmergeMe(){};
/****************************************************************************************************/
PmergeMe::PmergeMe(const PmergeMe & src){
    *this = src;
};
/****************************************************************************************************/
PmergeMe &PmergeMe::operator=(const PmergeMe &src){
    v_tab = src.v_tab;
    dq_tab = src.dq_tab;
    return (*this);
};
/****************************************************************************************************/
bool is_all_digits(const std::string& str) {
    for (std::string::size_type i = 0; i < str.size(); ++i) {
        char ch = str[i];
        if (!isdigit(static_cast<unsigned char>(ch))) {
            return false; // Return false as soon as a non-digit character is found
        }
    }
    return true; // All characters are digits
}
/****************************************************************************************************/
PmergeMe::PmergeMe(int ac, char ** av)
{
    for (int i = 1; i < ac; i++)
   {
        int number;
        std::string str = av[i];
        std::istringstream iss(str);
        if(iss.fail()){
            std::cout << "INVALID ARGUMENT" << std::endl;
            exit(0);
        }
        if(!is_all_digits(str)){
            std::cout << "INVALID ARGUMENTS" << std::endl;
            exit(0);
        }
        iss >> number;
        v_tab.push_back(number);
        dq_tab.push_back(number);}
   std::cout << "before : " << std::endl;
   for (size_t i = 0; i < v_tab.size(); i++)
        std::cout << v_tab[i] << " ";
};
/****************************************************************************************************/
void PmergeMe::Vec_Ins_Sort(std::vector<int> &vect)
{
    int j;
    size_t i = 0;
    while (i < vect.size())
    {
        j = i;
        // Perform the insertion sort with the inner while loop
        while (j > 0 && vect[j - 1] > vect[j]){
            std::swap(vect[j], vect[j - 1]);
            j = j - 1;}
        i++;  // Manually increment i inside the loop
    }
};
/****************************************************************************************************/
void PmergeMe::Vec_Ford_Johnson_Merge(std::vector<int>& src, std::vector<int>& left, std::vector<int>& right) {
    int left_len = left.size();
    int right_len = right.size();

    // Use two pointers to merge
    int i = 0, j = 0, k = 0;

    // Temporary vector for the merged result
    std::vector<int> merged;

    // Perform the Ford-Johnson merge, trying to minimize comparisons
    while (i < left_len && j < right_len) {
        if (left[i] <= right[j]) {
            merged.push_back(left[i++]);
        } else {
            merged.push_back(right[j++]);
        }
    }

    // Copy any remaining elements from both halves
    while (i < left_len) merged.push_back(left[i++]);
    while (j < right_len) merged.push_back(right[j++]);

    // Copy the merged result back into the original vector
    for (size_t m = 0; m < merged.size(); ++m) {
        src[k++] = merged[m];
    }
}
/****************************************************************************************************/
void PmergeMe::Vec_Mg_Ins_Sort(std::vector<int>& vect) {
    size_t mid;
    std::vector<int> left;
    std::vector<int> right;

    // Base case: use insertion sort for small vectors
    if (vect.size() <= 10) {
        Vec_Ins_Sort(vect);
        return;
    }

    mid = vect.size() / 2;

    // Copy elements to left vector using a while loop
    size_t i = 0;
    while (i < mid) {
        left.push_back(vect[i++]);
    }

    // If left size is <= 10, use insertion sort
    if (left.size() <= 10) {
        Vec_Ins_Sort(left);
    }

    // Copy elements to right vector using a while loop
    i = mid; // Start at the middle index for the right side
    while (i < vect.size()) {
        right.push_back(vect[i++]);
    }

    // If right size is <= 10, use insertion sort
    if (right.size() <= 10) {
        Vec_Ins_Sort(right);
    }

    // Recursively apply merge-insertion sort to both halves
    Vec_Mg_Ins_Sort(left);
    Vec_Mg_Ins_Sort(right);

    // Merge the sorted halves using Ford-Johnson method
    Vec_Ford_Johnson_Merge(vect, left, right);
}
/****************************************************************************************************/
void PmergeMe::Vec_Rslt(){
    clock_t start;
    clock_t end;
    double period;
    size_t i = 0;

    start = clock();
    Vec_Mg_Ins_Sort(v_tab);
    end = clock();
    period = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << std::endl <<"after : " << std::endl;
    while (i < v_tab.size())
        std::cout << v_tab[i++] << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << v_tab.size();
    std::cout << " elements with std::vector : " << period;
    std::cout << "s" << std::endl;
};
/****************************************************************************************************/
void PmergeMe::Dq_Ins_Sort(std::deque<int> &src) {
    size_t i = 1;
    while(i < src.size()) {
        size_t j = i;
        while (j > 0 && src[j - 1] > src[j]) {
            std::swap(src[j], src[j - 1]);
            --j;
        }
        ++i;
    }
}

/****************************************************************************************************/
void PmergeMe::Dq_Ford_Johnson_Merge(std::deque<int>& src, std::deque<int>& left, std::deque<int>& right) {
    int left_len = left.size();
    int right_len = right.size();

    // Use two pointers to merge
    int i = 0, j = 0, k = 0;

    // Temporary deque for the merged result
    std::deque<int> merged;

    // Perform the Ford-Johnson merge, trying to minimize comparisons
    while (i < left_len && j < right_len) {
        if (left[i] <= right[j]) {
            merged.push_back(left[i++]);
        } else {
            merged.push_back(right[j++]);
        }
    }

    // Copy any remaining elements from both halves
    while (i < left_len) merged.push_back(left[i++]);
    while (j < right_len) merged.push_back(right[j++]);

    // Copy the merged result back into the original deque
    for (size_t m = 0; m < merged.size(); ++m) {
        src[k++] = merged[m];
    }
}
/****************************************************************************************************/
void PmergeMe::Dq_Mg_Ins_sort(std::deque<int>& src) {
    size_t half;
    size_t i = 0;
    std::deque<int> right;
    std::deque<int> left;

    if (src.size() <= 10) {
        Dq_Ins_Sort(src);
        return;
    }

    half = src.size() / 2;
    while (i < half) {
        left.push_back(src[i++]);
    }

    if (left.size() <= 10) {
        Dq_Ins_Sort(left);
    }

    i = half;
    while (i < src.size()) {
        right.push_back(src[i++]);
    }

    if (right.size() <= 10) {
        Dq_Ins_Sort(right);
    }

    Dq_Mg_Ins_sort(left);
    Dq_Mg_Ins_sort(right);

    // Merge the sorted halves using Ford-Johnson method
    Dq_Ford_Johnson_Merge(src, left, right);
}
/****************************************************************************************************/
void PmergeMe::Dq_Rslt(){
    clock_t start;
    clock_t end;
    double period;

    start = clock();
    Dq_Mg_Ins_sort(dq_tab);
    end = clock();
    period = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << dq_tab.size();
    std::cout << " elements with std::Deque : " << period;
    std::cout << "s" << std::endl;
};
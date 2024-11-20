/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:29:07 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/18 18:34:44 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <sstream>
# include <utility>
# include <cctype>

class PmergeMe
{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(int ac, char **argv);
        PmergeMe(const PmergeMe &src);
        PmergeMe &operator=( const PmergeMe & src);
        std::vector<int> v_tab;
        void Vec_Mg_Ins_Sort(std::vector<int> &vec);
        void Vec_Ins_Sort(std::vector<int> &vec);
        void Vec_Ford_Johnson_Merge(std::vector<int> &src, std::vector<int> &left, std::vector<int> &right);
        void Vec_Rslt();
        std::deque<int> dq_tab;
        void Dq_Mg_Ins_sort(std::deque<int> &dq);
        void Dq_Ins_Sort(std::deque<int> &dq);
        void Dq_Ford_Johnson_Merge(std::deque<int> &src, std::deque<int> &left, std::deque<int> &right);
        void Dq_Rslt();
};
# endif
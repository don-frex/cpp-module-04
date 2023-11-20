/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:41:00 by asaber            #+#    #+#             */
/*   Updated: 2023/11/19 18:14:11 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain& other);
		Brain& operator = (const Brain& other);
		~Brain(void);
		void	setIdeas(std::string idea, int index);
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};

#endif
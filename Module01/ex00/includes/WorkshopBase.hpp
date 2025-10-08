/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorkshopBase.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:49:36 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 13:51:57 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKSHOPBASE_HPP
# define WORKSHOPBASE_HPP

class	Worker;

class WorkshopBase
{
	public:
		virtual ~WorkshopBase()	{}
		virtual bool	fitWorkshop(Worker *worker) = 0;
		virtual void	releaseWorker(Worker *worker) = 0;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:19:03 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 14:03:21 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKSHOP_HPP
# define WORKSHOP_HPP

# include "Worker.hpp"
# include "Shovel.hpp"
# include "Hammer.hpp"

# include "WorkshopBase.hpp"

template <typename ToolType>
class	Workshop : public WorkshopBase
{
	public:
		Workshop()
		{
			std::cout << YELLOW"Workshop: Workshop ready to work & shop!"RESET << std::endl;
		}
		~Workshop()
		{
			std::cout << YELLOW"Workshop: Destroyed workshop!"RESET << std::endl;
		}

		bool	fitWorkshop(Worker *worker)
		{
			return (worker->getTool<ToolType>());
		}
		void	registerWorker(Worker *worker)
		{
			if (fitWorkshop(worker))
			{
				_workers.push_back(worker);
				std::cout << YELLOW"Workshop: Registered new worker"RESET << std::endl;
				worker->registerWorkshop(this);
			}
			else
				std::cout << YELLOW"Workshop: Worker did not have the required tool!"RESET << std::endl;
		}
		void	releaseWorker(Worker *worker)
		{
			std::vector<Worker*>::iterator find = std::find(_workers.begin(), _workers.end(), worker);

			if (find != _workers.end())
			{
				_workers.erase(find);
				std::cout << YELLOW"Workshop: Released a worker"RESET << std::endl;
			}
			else
				std::cout << YELLOW"Workshop: Could not find a worker to release"RESET << std::endl;
		}
		void	executeWorkDay()
		{
			std::cout << YELLOW"Workshop: Executing work day"RESET << std::endl;
			for (std::vector<Worker*>::iterator it = _workers.begin(); it != _workers.end(); it++)
				(*it)->work();
		}
	private:
		std::vector<Worker*>	_workers;
};

#endif

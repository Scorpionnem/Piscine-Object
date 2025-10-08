/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:56:21 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 14:02:41 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
# define WORKER_HPP

# include "Position.hpp"
# include "Statistic.hpp"
# include "Shovel.hpp"
# include "Hammer.hpp"

# define nullptr NULL

# include "WorkshopBase.hpp"

class	Worker
{
	public:
		Worker()
		{
			std::cout << RED"Worker: I am alive!"RESET << std::endl;
		}
		~Worker()
		{
			std::cout << RED"Worker: I died! I really needed that job"RESET << std::endl;
		}

		void	addTool(Tool *tool)
		{
			_tools.push_back(tool);
			std::cout << RED"Worker: Added a new tool to my inventory"RESET << std::endl;
		}
		void	dropTool(Tool *tool)
		{
			std::vector<Tool*>::iterator find = std::find(_tools.begin(), _tools.end(), tool);

			if (find != _tools.end())
			{
				_tools.erase(find);
				std::cout << RED"Worker: Dropped tool"RESET << std::endl;

				for (std::vector<WorkshopBase*>::iterator it = _workshops.begin(); it != _workshops.end(); it++)
					if (!(*it)->fitWorkshop(this))
						(*it)->releaseWorker(this);
			}
			else
				std::cout << RED"Worker: Could not find a tool to drop"RESET << std::endl;
		}
		void	registerWorkshop(WorkshopBase *workshop)
		{
			_workshops.push_back(workshop);
			std::cout << RED"Worker: Registered new workshop"RESET << std::endl;
		}
		void	work()
		{
			std::cout << RED"Worker: Working hard"RESET << std::endl;
			for (std::vector<Tool*>::iterator it = _tools.begin(); it != _tools.end(); it++)
				(*it)->use();
		}
		template <typename ToolType>
		Tool *getTool()
		{
			std::cout << RED"Worker: Getting a tool with a special type"RESET << std::endl;
			for (std::vector<Tool*>::iterator it = _tools.begin(); it != _tools.end(); it++)
			{
				if (dynamic_cast<ToolType*>(*it))
					return (*it);
			}
			return (nullptr);
		}
	private:
		Position				_coordinate;
		Position				_stat;
		std::vector<Tool*>		_tools;
		std::vector<WorkshopBase*>	_workshops;
};

#endif

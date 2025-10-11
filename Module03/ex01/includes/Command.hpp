/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Command.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:34:43 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 11:51:34 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_HPP
# define COMMAND_HPP

# include <time.h>
# include <string>
# include <map>

class	Command
{
	public:
		Command(int id, const std::string &client, const std::map<std::string, int> &articles)
		{
			_id = id;
			_client = client;
			time_t timestamp = time(NULL);
			_date = localtime(&timestamp);
			_articles = articles;
		}
		virtual int get_total_price()
		{
			int	res = 0;
			for (auto article : _articles)
				res += article.second;
			return (res);
		}
	protected:
		int							_id;
		struct tm					*_date;
		std::string					_client;
		std::map<std::string, int>	_articles;
};

#endif

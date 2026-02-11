/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:29:16 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 13:07:15 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_HPP
# define EMPLOYEE_HPP

# include <iostream>
# include <algorithm>
# include <string>

class	Employee
{
	public:
		Employee(std::string name, int hourlyValue) : _name(name), _hourlyValue(hourlyValue) {}
		virtual ~Employee() {}

		virtual int	executeWorkday()
		{
			_hoursWorked += 7;
			return (7);
		}
		virtual int	calculateSalary()
		{
			int	salary = _hourlyValue * _hoursWorked;

			std::cout << salary << std::endl;
			return (salary);
		}
	protected:
		std::string	_name;
	
		int	_hoursWorked = 0;
		int	_hourlyValue = 0;
};

class RegisterHoursToDo
{
	public:
		RegisterHoursToDo() {}
		~RegisterHoursToDo() {}

		void	registerHoursToDo(int hours)
		{
			_neededHours += hours;
		}
	protected:
		int	_neededHours = 0;
};

class RegisterSchoolHours
{
	public:
		RegisterSchoolHours() {}
		~RegisterSchoolHours() {}

		void	registerSchoolHours(int hours)
		{
			_schoolHours += hours;
		}
	protected:
		int	_schoolHours = 0;
		int	_completedSchoolHours = 0;
};

class RegisterNotWorkHours
{
	public:
		RegisterNotWorkHours() {}
		~RegisterNotWorkHours() {}

		void	registerNotWorkedHours(int hours)
		{
			_notWorkedHours += hours;
		}
	protected:
		int	_notWorkedHours = 0;
};

class	TempWorker : public Employee, public RegisterHoursToDo
{
	public:
		TempWorker(std::string name, int hourlyValue) : Employee(name, hourlyValue) {}
		~TempWorker() {}
	private:
		int	executeWorkday()
		{
			int	hoursOfWork = 7;

			hoursOfWork = std::min(hoursOfWork, _neededHours);
			if (_neededHours <= 0)
			{
				std::cout << _name << " did all its hours no more work!" << std::endl;
				return (0);
			}
			_neededHours -= hoursOfWork;
			std::cout << _name << " will work for " << hoursOfWork << " hour" << std::endl;
			_hoursWorked += hoursOfWork;
			return (hoursOfWork);
		}
		int	calculateSalary()
		{
			int	salary = _hourlyValue * _hoursWorked;

			std::cout << _name << "'s salary is " << salary << " euros." << std::endl;
			return (salary);
		}
};

class	Apprentice : public Employee, public RegisterHoursToDo, public RegisterSchoolHours
{
	public:
		Apprentice(std::string name, int hourlyValue) : Employee(name, hourlyValue) {}
		~Apprentice() {}
	private:
		int	executeWorkday()
		{
			int	hoursOfWork = 7;

			if (_schoolHours <= 0)
			{
				std::cout << _name << " did all its school hours time for work!" << std::endl;
				if (_neededHours <= 0)
				{
					std::cout << _name << " did all its work hours time for sleep!" << std::endl;
					return (0);
				}
			}
			else
			{
				hoursOfWork = std::min(hoursOfWork, _schoolHours);
				_schoolHours -= hoursOfWork;
				_completedSchoolHours += hoursOfWork;
				std::cout << _name << " will study for " << hoursOfWork << " hour and needs " << _schoolHours << " more school hours" << std::endl;
				return (hoursOfWork);
			}
			hoursOfWork = std::min(hoursOfWork, _neededHours);
			_neededHours -= hoursOfWork;
			std::cout << _name << " will work for " << hoursOfWork << " hour" << std::endl;
			_hoursWorked += hoursOfWork;
			return (hoursOfWork);
		}
		int	calculateSalary()
		{
			int	salary = (_hourlyValue * _hoursWorked) + (_completedSchoolHours * (_hourlyValue / 2));

			std::cout << _name << "'s salary is " << salary << " euros." << std::endl;
			return (salary);
		}
};

class	ContractEmployee : public Employee, public RegisterNotWorkHours
{
	public:
		ContractEmployee(std::string name, int hourlyValue) : Employee(name, hourlyValue) {}
		~ContractEmployee() {}
	private:
		int	executeWorkday()
		{
			_hoursWorked += 7;
			std::cout << _name << " will work for " << 7 << " hours" << std::endl;
			return (7);
		}
		int	calculateSalary()
		{
			int	salary = _hourlyValue * (_hoursWorked - _notWorkedHours);

			std::cout << _name << "'s salary is " << salary << " euros." << std::endl;
			return (salary);
		}
};

#endif

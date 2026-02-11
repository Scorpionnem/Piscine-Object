/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EmployeeManagement.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:28:38 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 12:47:36 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEEMANAGEMENT_HPP
# define EMPLOYEEMANAGEMENT_HPP

# include "Employee.hpp"
# include <set>

class	EmployeeManagement
{
	public:
		void	addEmployee(Employee *employee)
		{
			_employees.insert(employee);
		}
		void	removeEmployee(Employee *employee)
		{
			_employees.erase(employee);
		}
		void	executeWorkday()
		{
			for (auto employee : _employees)
				employee->executeWorkday();
		}
		void	calculatePayroll()
		{
			for (auto employee : _employees)
				employee->calculateSalary();
		}
	private:
		std::set<Employee*>	_employees;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:00:25 by kadferna          #+#    #+#             */
/*   Updated: 2025/11/26 10:00:28 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Harl.hpp"

int	main(void) {
	Harl betterCallHarl;

	betterCallHarl.complain("DEBUG");
	betterCallHarl.complain("INFO");
	betterCallHarl.complain("WARNING");
	betterCallHarl.complain("ERROR");
    betterCallHarl.complain("SOME_STUFF");
    return EXIT_SUCCESS;
}
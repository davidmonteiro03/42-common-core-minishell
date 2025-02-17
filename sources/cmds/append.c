/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:58:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/09/06 11:27:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	cmds_append(t_shell *shell, t_cmds *node, char *const value)
{
	if (shell == NULL || node == NULL || value == NULL)
		return (EXIT_FAILURE);
	files_pushback(&node->files, files_new(APPEND_TYPE, value));
	return (EXIT_SUCCESS);
}

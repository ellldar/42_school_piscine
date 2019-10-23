# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    genmap.pl                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/15 22:23:06 by esupatae          #+#    #+#              #
#    Updated: 2019/04/15 22:23:20 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
	for (my $i = 0; $i < $y; $i++) {
    	for (my $j = 0; $j < $x; $j++) {
			if (int(rand($y) * 2) < $density) {
    			print "o";
			}
			else {
			print ".";
		}
	}
	print "\n";
}

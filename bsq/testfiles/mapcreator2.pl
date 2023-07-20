# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    mapcreator.pl                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburakow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 10:31:59 by mburakow          #+#    #+#              #
#    Updated: 2023/07/20 11:02:40 by hpatsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 4);
my ($x, $y, $density, $key) = @ARGV;
print "$y$key\n";
for (my $i = 0; $i < $y; $i++) {
for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
print substr($key, 0, 1);
}
else {
print substr($key, 1, 1);
}
}
print "\n";
}

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raphco <raphco@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 22:08:08 by tcohen            #+#    #+#              #
#    Updated: 2025/03/25 00:36:57 by raphco           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du compilateur
CXX = c++

# Drapeaux de compilation
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Dossier pour les fichiers objets
OBJDIR = obj

# Fichiers sources
SRCS = Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

# Fichiers objets correspondants
OBJS = $(OBJDIR)/Bureaucrat.o $(OBJDIR)/main.o $(OBJDIR)/AForm.o $(OBJDIR)/PresidentialPardonForm.o \
		 $(OBJDIR)/RobotomyRequestForm.o $(OBJDIR)/ShrubberyCreationForm.o

# Nom du programme final
TARGET = Form

# Règle par défaut pour construire le programme
all: $(TARGET)

# Construction du programme final
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

# Création du dossier obj si nécessaire
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Compilation des fichiers sources en fichiers objets
$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers générés
clean:
	rm -rf $(OBJDIR) 

fclean : clean
	rm $(TARGET)

re : fclean all

# Phony pour les cibles de nettoyage
.PHONY: all clean

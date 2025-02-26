cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(ProgressCB)

# Définir le standard C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajouter les fichiers source
set(SOURCES
    HMI.cpp
    Model.cpp
    main.cpp
)

# Ajouter les fichiers d'en-tête
set(HEADERS
    HMI.h
    Model.h
)

# Créer l'exécutable
add_executable(ProgressCB ${SOURCES} ${HEADERS})

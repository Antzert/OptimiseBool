# OptimiseBool
Ce depôt contient des boolean optimiser 8 boolean par octé en langage C.

## Table des matières

- [Description](#description)
- [Types de données](#types-de-données)
- [Fonctions et macros](#fonctions-et-macros)
- [Utilisation](#utilisation)

## Description

Ce projet illustre l'utilisation de types de données entiers (8, 16, 32, 64 et 128 bits) pour représenter un ensemble de booléens. Les fonctions et macros fournies permettent de récupérer et de modifier les valeurs des bits dans ces types de données.

## Types de données

Le fichier OptimiseBool.h définit les types de données suivants :

- `OptimiseBool8`: Un alias pour le type `__int8_t` représentant 8 booléens.
- `OptimiseBool16`: Un alias pour le type `__int16_t` représentant 16 booléens.
- `OptimiseBool32`: Un alias pour le type `__int32_t` représentant 32 booléens.
- `OptimiseBool64`: Un alias pour le type `__int64_t` représentant 64 booléens.
- `OptimiseBool128`: Un alias pour le type `__int128_t` représentant 128 booléens.

## Fonctions et macros

Le fichier OptimiseBool.h fournit les fonctions et macros suivantes :

- `GetBool(bools, index)`: Récupère la valeur du bit à l'index donné dans la variable `bools`.
- `SetBool(bools, index, value)`: Modifie la valeur du bit à l'index donné dans la variable `bools`.

## Utilisation

Pour utiliser ce projet, incluez le fichier OptimiseBool.h dans votre code source C. Vous pouvez ensuite utiliser les types de données et les fonctions/macro pour manipuler efficacement des ensembles de booléens.

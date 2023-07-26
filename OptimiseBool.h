    #ifndef __OPTIMISEBOOL__H__
    #define __OPTIMISEBOOL__H__

    /**
     * @file OptimiseBool.h
     * @brief Ce fichier contient un exemple de manipulation de bits pour des entiers de différentes tailles.
     */

    #include <stdio.h>
    #include <stdlib.h>

    /**
     * @typedef OptimiseBool8
     * @brief Un alias pour le type __int8_t pour représenter 8 booléens
     */
    typedef __int8_t OptimiseBool8;

    /**
     * @typedef OptimiseBool16
     * @brief Un alias pour le type __int16_t pour représenter 16 booléens
     */
    typedef __int16_t OptimiseBool16;

    /**
     * @typedef OptimiseBool32
     * @brief Un alias pour le type __int32_t pour représenter 32 booléens
     */
    typedef __int32_t OptimiseBool32;

    /**
     * @typedef OptimiseBool64
     * @brief Un alias pour le type __int64_t pour représenter 64 booléens
     */
    typedef __int64_t OptimiseBool64;

    /**
     * @typedef OptimiseBool128
     * @brief Un alias pour le type __int128_t pour représenter 128 booléen
     */
    typedef __int128_t OptimiseBool128;

    /**
     * @brief Récupère la valeur du bit à l'index donné dans la variable bools.
     *
     * @param bools La variable contenant les bits à récupérer.
     * @param index L'index du bit à récupérer (0 pour le bit de poids faible, 127 pour le bit de poids fort).
     * @return La valeur du bit à l'index donné (0 ou 1).
     */
    #define GetBool(bools, index) ((bools >> index) & 1)

    /**
     * @brief Modifie la valeur du bit à l'index donné dans la variable bools.
     *
     * Cette macro modifie le bit à l'index donné dans la variable bools en fonction de la valeur donnée.
     *
     * @param bools La variable contenant les bits à modifier.
     * @param index L'index du bit à modifier (0 pour le bit de poids faible, 127 pour le bit de poids fort).
     * @param value La nouvelle valeur du bit (0 ou 1).
     */
    #define SetBool(bools, index, value) (bools = (value) ? (bools | ((OptimiseBool128)1 << index)) : bools & ~((OptimiseBool128)1 << index))

#endif /* OPTIMISEBOOL_H */
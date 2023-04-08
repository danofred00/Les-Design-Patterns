# Design Pattern Explain Par [Daniel Leussa](https://github.com/danofred00)


Il s'agit ici d'un manuel sur les differents desing pattern que je connais et aimerais partager avec vous.


# Sommaire

1. Requis
2. Introduction aux Desing Patterns
3. Quelques desing patterns
    + Patterns de contruction
    + Pattern structural
    + Pattern de comportement
4. Utilisation de ce depot


# Requis pour debuter
Attention !!!

Ce cours n'est pas fait pour les debutans en programmation, il est neccessaire d'avoir au moins les bases de la POO (**P**rogrammation **O**rientée **O**bjet) c'est a dire l'heritage et le polymorphisme.

# Introduction

Dans le monde de la programmation, les design pattern (Patron de conception en Français) representent des solutions apportées aux problèmes que nous developpeurs rencontrons.


# Quelques Design Pattern

Ce depot contient une implementation sur certains patterns, et je vous invite d'avantage a consulter [Google](https://google.com) pour besoin de plus d'information a ce sujet.

Nous distinguons ainsi plusieur types de patterns, ceux de contruction, de comportement et de structure.

Chaque repertoire ici represente une implementation de design pattern, je les ai classer par type.

Notes: J'utiliserai C++ pour implementer les differents patterns

## Construction patterns
Ceux-ci 
+sont utiliser ici pour de la construction d'objet.
+ Factory Method
+ Abstract Factory
+ Builder
+ Singleton

## Structural patterns
Ici nous avons les patterns pour structurer nos classes.
+ Adapter
+ Bridge
+ Composite
+ Decorator 

## Behavioral Patterns
Ceux-ci definissent le comportement de certains objets par rapport a d'autres.
+ Command
+ Chain of Responsabilty
+ Stategy
+ Mediator
+ Observer
+ Template

Ceci n'est pas une liste exaustive de tous les design patterns qui existent, mais il s'agit de ceux que je maitrise pour le mieux, et J'espere qu'elle vous sera bien utile.

## Utilisation de ce depot

Pour tester les codes que je vous fournis, vous devez creer le dossier bin dans le sous-dossier contenant le pattern a tester,  ensuite executer le Makefile.

    mkdir bin
    make

### Autres References :
+ [Professional C book - Marc Gregoire]()

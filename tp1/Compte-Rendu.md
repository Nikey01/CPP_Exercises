# TP1 - Introduction
## NIMALAKUMARAN Nikethan

---
## Exercice 1 - Entrée / sortie (30 min)

**1. Ouvrez le fichier [main.cpp](ex1/main.cpp) et essayez de comprendre ce que font chacune de ses lignes.**

Dans ce programme, il y a d'abord un message qui s'affiche sur la console demandant d'entrer un nom. Puis on attend que l'utilisateur saisisse un nom sur l'entrée standard d'au maximum 20 caractères. Enfin il y a un autre message qui est affiché sur l'entrée standard.

**2. Compilez ce programme de manière à générer un executable nommé "bonjour".**
g++ -std=c++17 -o bonjour main.cpp

**3. Lancez le programme. Celui-ci vous demande votre nom, mais affiche toujours en sortie : "Bonjour Palluche La Faluche !".**
**Modifiez le programme pour qu'il affiche votre prénom à la place.**
                std::cout << "Bonjour " << name << std::endl;

**4. Créez une nouvelle branche git nommée `tp1` et commitez vos changements dessus avec le message "tp1 - ex1 - q4".**
                git branch tp1
                git checkout tp1

5. Lancez le programme et passez-lui un très long nom (au moins 20 caractères). Que se passe-t-il ?  
Quelle classe de la librairie standard faudrait-il utiliser à la place du tableau de `char` pour stocker le nom de l'utilisateur ?

6. Modifiez le programme afin de réaliser ce changement. Testez et commitez vos modifications.

7. Prenez note des difficultés que vous avez rencontrées durant cet exercice et de comment vous les avez surmontées.
 

## Exercice 2 - Premières erreurs (1h)

> [!IMPORTANT]
> Pensez à commiter vos changements à la fin de chaque question.
> Ainsi, si vous souhaitez annuler vos modifications pour revenir au code enregistré à la fin de la question précédente, vous pourrez le faire.

1. Ajoutez un fichier "Person.hpp" dans le répertoire [ex2](ex2) et copiez dedans le code ci-dessous :
```cpp
class Person
{
public:
    std::string first_name;
    std::string surname;
};
```

2. Dans le fichier [main.cpp](ex2/main.cpp), ajoutez une fonction `main`.  
A l'intérieur, instanciez un objet de type `Person` et modifiez ses attributs afin que son prénom soit "Palluche" et son nom de famille "La Faluche".  
Enfin, ajoutez les instructions permettant d'afficher "La personne s'appelle Palluche La Faluche" (en utilisant les attributs de l'objet bien sûr).

3. Essayez de compiler le programme. Modifiez les fichiers [main.cpp](ex2/main.cpp) et [Person.hpp](ex2/Person.hpp) afin de corriger les erreurs si vous en avez.  
*Indice : pensez à inclure les headers de **TOUS** les symboles que vous avez utilisés !*  

4. Ajoutez un fichier "Person.cpp" dans le répertoire [ex2](ex2).
Modifiez le code de la classe `Person` de manière à rendre ses attributs privés : ajoutez un constructeur pour les initialiser et deux getters pour les récupérer. Vous placerez l'implémentation de ces fonctions dans le fichier .cpp.  
Compilez le fichier "Person.cpp" pour générer le fichier-object associé.  
Si vous avez des erreurs de syntaxe, essayez de comprendre le message du compilateur pour les corriger.

5. Modifiez le fichier "main.cpp" de façon à prendre en compte les modifications de la classe `Person`. Compilez ensuite le programme complet.

6. Supprimez le contenu de la fonction `main`. A la place, instanciez un tableau dynamique de `Person`.  
Modifiez ensuite le programme afin que l'utilisateur puisse entrer le nombre de personnes qu'il désire ajouter au tableau, puis le nom complet de chacune de ses personnes. A la fin, le programme affiche le prénom et le nom de tout le monde.

*Exemple :*  
```bash
Nombre de personnes: 3  
Prenom: Aa  
Nom: Bb  
Prenom: Cc  
Nom: Dd  
Prenom: Ee  
Nom: Ff  
Les personnes sont Aa Bb, Cc Dd, Ee Ff.
```

7. Prenez note des difficultés que vous avez rencontrées durant cet exercice et de comment vous les avez surmontées.

## Exercice 3 - Questions (30 min)

A faire avec l'ensemble du groupe.  
Pensez à prendre des notes pour les donner à vos camarades absents.

1. Parlez de vos différents blocages avec le restant de la classe et discutez des solutions.

2. Expliquez la différence entre phase de build (compilation) et phase de link (édition des liens).  
En quoi consiste la précompilation et à quel moment est-elle effectuée ?

3. Que signifient les messages suivants ?  
a. error: 'qqchose' was not declared in this scope  
b. error: 'qqchose' is not a member of 'std'  
Ces erreurs se produisent-elles pendant la phase de build ou de link ?  
Que fait exactement l'instruction préprocesseur `#include` et pourquoi permet-elle généralement de résoudre ce type de problème ?

4. Compilez le programme de l'exercice en ne linkant que le fichier-objet associé à `main.cpp` (c'est-à-dire en oubliant `utils.cpp`).  
Quelle est l'erreur qui s'affiche ?    
En quoi est-elle différente des erreurs de la question précédente ?  
Expliquez ce qu'elle signifie exactement.

5. Décommentez maintenant les instructions commentées des fichiers [main.cpp](ex3/main.cpp) et [utils.hpp](ex3/utils.hpp).  
Compilez maintenant le programme complet (avec les modules main et utils).  
Quelle est l'erreur qui s'affiche ? S'agit-il d'une erreur de build ou de link ?  
Pourquoi se produit-elle ?  
Que faudrait-il faire pour la résoudre ?

6. Ajoutez le mot-clef `inline` devant la définition de la fonction `print_bye` dans [utils.hpp](ex3/utils.hpp). Que constatez-vous quand vous réessayez de compiler le programme ?  
Selon-vous, quel est l'effet du mot-clef `inline` sur le linker ?

## Pour terminer

Commitez vos modifications si ce n'est pas déjà fait.  
Revenez sur la branche `master`. Vous devriez voir disparaître tout votre beau travail.  
Si vous souhaitez le retrouver, vous pouvez soit retourner sur la branche `tp1`, soit merger cette branche sur la branche `master`.

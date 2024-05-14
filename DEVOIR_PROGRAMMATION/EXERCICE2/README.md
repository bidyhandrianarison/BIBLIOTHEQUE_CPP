### `RAPPORT POUR L'EXERCICE 2`
### `main.cpp`

Il inclut les bibliothèques nécessaires (`<iostream>`, `<fstream>`, `<string>`) et définit la fonction `main()` qui est le point de départ de l'exécution du programme.

1. **Inclusion des bibliothèques**:
   - `<iostream>` pour l'interaction avec l'utilisateur via la console.
   - `<fstream>` pour la manipulation de fichiers.
   - `<string>` pour la manipulation de chaînes de caractères.

2. **Déclaration de la classe `Activation`**:
   - `using namespace std;` permet d'utiliser les noms de types et de fonctions définis dans le namespace `std` sans avoir à préfixer chaque utilisation par `std::`.

3. **Initialisation de l'objet `Trying`**:
   - `Activation Trying;` crée une instance de la classe `Activation`.

4. **Saisie du code d'activation**:
   - `string activationCode;` déclare une variable pour stocker le code d'activation entré par l'utilisateur.
   - `cout << "Entrez votre code d'activation : ";` affiche un message demandant à l'utilisateur d'entrer son code d'activation.
   - `cin >> activationCode;` lit la saisie de l'utilisateur et la stocke dans `activationCode`.

5. **Vérification du code d'activation**:
   - `Trying.verifyActivation(activationCode);` appelle la méthode `verifyActivation` de l'objet `Trying` avec le code d'activation saisi par l'utilisateur.

6. **Affichage du résultat**:
   - Si le code d'activation est valide (`Trying.getStatus()==true`), un message indiquant que le code est valide est affiché.
   - Sinon, un message informant l'utilisateur qu'il a épuisé ses essais gratuits est affiché.

7. **Fin de la fonction `main`**:
   - `return 0;` indique que le programme s'est terminé avec succès.

### `Tools/Activation.hpp`

Ce fichier contient la déclaration de la classe `Activation`. Il définit les méthodes publiques et privées de la classe.

 **Définition de la classe `Activation`**:
   - `Activation();` est le constructeur de la classe.
   - `~Activation();` est le destructeur de la classe.
   - `void verifyActivation(string code);` permet de vérifier si le code d'activation est valide.
   - `bool getStatus();` retourne l'état de validation du code d'activation.
   - `string getSerialCode();` retourne le code d'activation valide.
   - `bool status;` stocke l'état de validation du code d'activation.
   - `string serialCode;` stocke le code d'activation valide.

### `Tools/Activation.cpp`

Ce fichier contient l'implémentation des méthodes de la classe `Activation`.
1. **Constructeur**:
   - Initialise `status` à `false` et tente de lire le code d'activation valide depuis le fichier `SERIAL.txt`.
2. **Méthode `verifyActivation`**:
   - Compare le code d'activation saisi par l'utilisateur avec le code valide stocké dans `serialCode`.
   - Si le code est valide, `status` est mis à `true`.
   - Si le code n'est pas valide, il permet à l'utilisateur de saisir le code plusieurs fois jusqu'à ce qu'il soit valide ou qu'il n'y ait plus d'essais gratuits.

3. **Méthode `getStatus`**:
   - Retourne l'état de validation du code d'activation.

### `SERIAL.txt`

Ce fichier contient le code d'activation valide pour le logiciel. Il est lu par le constructeur de la classe `Activation` pour initialiser le code d'activation valide.

### `libStatic/libStatic.a` et `libDynamic/libDynamic.so`

Ces fichiers représentent la bibliothèque statique et dynamique créée à partir de `Activation.cpp`. 

PROGRAMMATION RPC : 

Mon Scenario:

En tant qu'utilisateur/trice de Spliiit, je souhaite pouvoir m'inscrire sur la
plateforme (INSCRIPTION) pour créer un compte utilisateur avec mes informations de
base. Ensuite, je veux être en mesure d'ajouter un abonnement (AJOUT_ABONNEMENT) en
spécifiant le type d'abonnement, son prix total, et le nombre de slots disponibles
Une fois mon abonnement ajouté, je désire créer un slot (CREATION_SLOT) en
précisant mon nom d'utilisateur, l'identifiant de l'abonnement auquel le slot est
associé, et le prix du slot. Lorsque j'ai besoin de trouver un slot disponible
(RECHERCHE_SLOT), je souhaite fournir mes informations utilisateur pour récupérer 
les détails du slot approprié. Après avoir utilisé un slot, je veux effectuer un 
paiement (PAIEMENT_SLOT) en indiquant l'identifiant du slot, la date du paiement, 
et le montant payé. Si je décide de ne plus utiliser la plateforme, je souhaite 
pouvoir supprimer mon compte (SUPPRIMER_COMPTE). En outre, je veux pouvoir modifier 
les détails de mon abonnement (MODIFIER_ABONNEMENT) et de mes slots (MODIFIER_SLOT) 
si nécessaire. Enfin, je veux pouvoir consulter mon historique de paiements 
(HISTORIQUE_PAIEMENTS) pour suivre mes transactions passées.


Description de chaque fonction de notre interface:

1. **INSCRIPTION(struct Utilisateur)**
   - Description : Cette fonction permet à un utilisateur de s'inscrire sur la plateforme Spliiit en fournissant ses informations de base telles que le nom, le prénom, l'email et le mot de passe.
   - Paramètres d'entrée : Un objet de type Utilisateur contenant les informations d'inscription.
   - Valeur de retour : Un objet de type Utilisateur contenant les détails de l'utilisateur nouvellement inscrit.

2. **AJOUT_ABONNEMENT(struct Abonnement)**
   - Description : Cette fonction permet à un utilisateur d'ajouter un abonnement à la plateforme Spliiit en spécifiant le type d'abonnement, le prix total, le nombre de slots et les slots disponibles.
   - Paramètres d'entrée : Un objet de type Abonnement contenant les détails de l'abonnement à ajouter.
   - Valeur de retour : Un objet de type Abonnement contenant les détails de l'abonnement ajouté.

3. **CREATION_SLOT(struct Slot)**
   - Description : Cette fonction permet à un utilisateur de créer un slot sur la plateforme Spliiit en spécifiant l'identifiant de l'abonnement auquel le slot est associé, le nom de l'utilisateur et le prix du slot.
   - Paramètres d'entrée : Un objet de type Slot contenant les détails du slot à créer.
   - Valeur de retour : Un objet de type Slot contenant les détails du slot créé.

4. **RECHERCHE_SLOT(struct Utilisateur)**
   - Description : Cette fonction permet à un utilisateur de rechercher un slot disponible en fournissant ses informations utilisateur.
   - Paramètres d'entrée : Un objet de type Utilisateur contenant les informations de l'utilisateur cherchant un slot.
   - Valeur de retour : Un objet de type Slot contenant les détails du slot disponible correspondant à la recherche.

5. **PAIEMENT_SLOT(struct Paiement)**
   - Description : Cette fonction permet à un utilisateur d'effectuer un paiement pour un slot utilisé en spécifiant l'identifiant du slot, la date du paiement et le montant payé.
   - Paramètres d'entrée : Un objet de type Paiement contenant les détails du paiement à effectuer.
   - Valeur de retour : Aucune (void).

6. **SUPPRIMER_COMPTE(struct Utilisateur)**
   - Description : Cette fonction permet à un utilisateur de supprimer son compte de la plateforme Spliiit.
   - Paramètres d'entrée : Un objet de type Utilisateur contenant les informations de l'utilisateur à supprimer.
   - Valeur de retour : Un booléen indiquant si la suppression du compte a été réussie ou non.

7. **MODIFIER_ABONNEMENT(struct Abonnement)**
   - Description : Cette fonction permet à un utilisateur de modifier les détails de son abonnement existant sur la plateforme Spliiit.
   - Paramètres d'entrée : Un objet de type Abonnement contenant les nouveaux détails de l'abonnement à modifier.
   - Valeur de retour : Un objet de type Abonnement contenant les détails de l'abonnement modifié.

8. **MODIFIER_SLOT(struct Slot)**
   - Description : Cette fonction permet à un utilisateur de modifier les détails d'un slot existant sur la plateforme Spliiit.
   - Paramètres d'entrée : Un objet de type Slot contenant les nouveaux détails du slot à modifier.
   - Valeur de retour : Un objet de type Slot contenant les détails du slot modifié.

9. **HISTORIQUE_PAIEMENTS(struct Utilisateur)**
   - Description : Cette fonction permet à un utilisateur de consulter son historique de paiements sur la plateforme Spliiit.
   - Paramètres d'entrée : Un objet de type Utilisateur contenant les informations de l'utilisateur pour lequel l'historique des paiements doit être consulté.
   - Valeur de retour : Aucune (void).



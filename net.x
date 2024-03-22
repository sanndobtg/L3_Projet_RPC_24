struct Utilisateur {
    char nom[40];
    char prenom[40];
    char email[50];
    char mot_de_passe[50];
};

struct Abonnement {
    int id;
    char type[20]; 
    int prix_total;
    int nb_slots;
    int slots_disponibles;
};

struct Slot {
    int id;
    int id_abonnement;
    char nom_utilisateur[40]; 
    float prix_slot; 
};

struct Paiement {
    int id;
    int id_slot;
    char date[10]; 
    float montant;
};

program SPLIIIT_PROG {
    version SPLIIIT_V1 {
        struct Utilisateur INSCRIPTION(struct Utilisateur) = 1;
        struct Abonnement AJOUT_ABONNEMENT(struct Abonnement) = 2;
        struct Slot CREATION_SLOT(struct Slot) = 3;
        struct Slot RECHERCHE_SLOT(struct Utilisateur) = 4;
        struct Paiement PAIEMENT_SLOT(struct Paiement) = 5;
        bool SUPPRIMER_COMPTE(struct Utilisateur) = 6;
        struct Abonnement MODIFIER_ABONNEMENT(struct Abonnement) = 7;
        struct Slot MODIFIER_SLOT(struct Slot) = 8;
        void HISTORIQUE_PAIEMENTS(struct Utilisateur) = 9;
    } = 1;
} = 0x20000001;

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NET_H_RPCGEN
#define _NET_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct Utilisateur {
	char nom[40];
	char prenom[40];
	char email[50];
	char mot_de_passe[50];
};
typedef struct Utilisateur Utilisateur;

struct Abonnement {
	int id;
	char type[20];
	int prix_total;
	int nb_slots;
	int slots_disponibles;
};
typedef struct Abonnement Abonnement;

struct Slot {
	int id;
	int id_abonnement;
	char nom_utilisateur[40];
	float prix_slot;
};
typedef struct Slot Slot;

struct Paiement {
	int id;
	int id_slot;
	char date[10];
	float montant;
};
typedef struct Paiement Paiement;

#define SPLIIIT_PROG 0x20000001
#define SPLIIIT_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define INSCRIPTION 1
extern  struct Utilisateur * inscription_1(struct Utilisateur *, CLIENT *);
extern  struct Utilisateur * inscription_1_svc(struct Utilisateur *, struct svc_req *);
#define AJOUT_ABONNEMENT 2
extern  struct Abonnement * ajout_abonnement_1(struct Abonnement *, CLIENT *);
extern  struct Abonnement * ajout_abonnement_1_svc(struct Abonnement *, struct svc_req *);
#define CREATION_SLOT 3
extern  struct Slot * creation_slot_1(struct Slot *, CLIENT *);
extern  struct Slot * creation_slot_1_svc(struct Slot *, struct svc_req *);
#define RECHERCHE_SLOT 4
extern  struct Slot * recherche_slot_1(struct Utilisateur *, CLIENT *);
extern  struct Slot * recherche_slot_1_svc(struct Utilisateur *, struct svc_req *);
#define PAIEMENT_SLOT 5
extern  struct Paiement * paiement_slot_1(struct Paiement *, CLIENT *);
extern  struct Paiement * paiement_slot_1_svc(struct Paiement *, struct svc_req *);
#define SUPPRIMER_COMPTE 6
extern  bool_t * supprimer_compte_1(struct Utilisateur *, CLIENT *);
extern  bool_t * supprimer_compte_1_svc(struct Utilisateur *, struct svc_req *);
#define MODIFIER_ABONNEMENT 7
extern  struct Abonnement * modifier_abonnement_1(struct Abonnement *, CLIENT *);
extern  struct Abonnement * modifier_abonnement_1_svc(struct Abonnement *, struct svc_req *);
#define MODIFIER_SLOT 8
extern  struct Slot * modifier_slot_1(struct Slot *, CLIENT *);
extern  struct Slot * modifier_slot_1_svc(struct Slot *, struct svc_req *);
#define HISTORIQUE_PAIEMENTS 9
extern  void * historique_paiements_1(struct Utilisateur *, CLIENT *);
extern  void * historique_paiements_1_svc(struct Utilisateur *, struct svc_req *);
extern int spliiit_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define INSCRIPTION 1
extern  struct Utilisateur * inscription_1();
extern  struct Utilisateur * inscription_1_svc();
#define AJOUT_ABONNEMENT 2
extern  struct Abonnement * ajout_abonnement_1();
extern  struct Abonnement * ajout_abonnement_1_svc();
#define CREATION_SLOT 3
extern  struct Slot * creation_slot_1();
extern  struct Slot * creation_slot_1_svc();
#define RECHERCHE_SLOT 4
extern  struct Slot * recherche_slot_1();
extern  struct Slot * recherche_slot_1_svc();
#define PAIEMENT_SLOT 5
extern  struct Paiement * paiement_slot_1();
extern  struct Paiement * paiement_slot_1_svc();
#define SUPPRIMER_COMPTE 6
extern  bool_t * supprimer_compte_1();
extern  bool_t * supprimer_compte_1_svc();
#define MODIFIER_ABONNEMENT 7
extern  struct Abonnement * modifier_abonnement_1();
extern  struct Abonnement * modifier_abonnement_1_svc();
#define MODIFIER_SLOT 8
extern  struct Slot * modifier_slot_1();
extern  struct Slot * modifier_slot_1_svc();
#define HISTORIQUE_PAIEMENTS 9
extern  void * historique_paiements_1();
extern  void * historique_paiements_1_svc();
extern int spliiit_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_Utilisateur (XDR *, Utilisateur*);
extern  bool_t xdr_Abonnement (XDR *, Abonnement*);
extern  bool_t xdr_Slot (XDR *, Slot*);
extern  bool_t xdr_Paiement (XDR *, Paiement*);

#else /* K&R C */
extern bool_t xdr_Utilisateur ();
extern bool_t xdr_Abonnement ();
extern bool_t xdr_Slot ();
extern bool_t xdr_Paiement ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_NET_H_RPCGEN */
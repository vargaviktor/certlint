/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXqualified88"
 * 	found in "asn1/rfc3739-PKIXqualified88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "PlaceOfBirth.h"

/*
 * This type is implemented using DirectoryString,
 * so here we adjust the DEF accordingly.
 */
asn_TYPE_descriptor_t asn_DEF_PlaceOfBirth = {
	"PlaceOfBirth",
	"PlaceOfBirth",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, CHOICE_constraint },
	asn_MBR_DirectoryString_1,
	5,	/* Elements count */
	&asn_SPC_DirectoryString_specs_1	/* Additional specs */
};


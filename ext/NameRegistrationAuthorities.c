/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXqualified88"
 * 	found in "asn1/rfc3739-PKIXqualified88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "NameRegistrationAuthorities.h"

asn_TYPE_member_t asn_MBR_NameRegistrationAuthorities_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_GeneralName,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NameRegistrationAuthorities_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NameRegistrationAuthorities_specs_1 = {
	sizeof(struct NameRegistrationAuthorities),
	offsetof(struct NameRegistrationAuthorities, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_NameRegistrationAuthorities = {
	"NameRegistrationAuthorities",
	"NameRegistrationAuthorities",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NameRegistrationAuthorities_tags_1,
	sizeof(asn_DEF_NameRegistrationAuthorities_tags_1)
		/sizeof(asn_DEF_NameRegistrationAuthorities_tags_1[0]), /* 1 */
	asn_DEF_NameRegistrationAuthorities_tags_1,	/* Same as above */
	sizeof(asn_DEF_NameRegistrationAuthorities_tags_1)
		/sizeof(asn_DEF_NameRegistrationAuthorities_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_NameRegistrationAuthorities_1,
	1,	/* Single element */
	&asn_SPC_NameRegistrationAuthorities_specs_1	/* Additional specs */
};


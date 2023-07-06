/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "TBSCertList.h"

static asn_TYPE_member_t asn_MBR_Member_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertList__revokedCertificates__Member, userCertificate),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_CertificateSerialNumber,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"userCertificate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertList__revokedCertificates__Member, revocationDate),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Time,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"revocationDate"
		},
	{ ATF_POINTER, 1, offsetof(struct TBSCertList__revokedCertificates__Member, crlEntryExtensions),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Extensions,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crlEntryExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_Member_tags_8[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_8[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* userCertificate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 }, /* crlEntryExtensions */
    { (ASN_TAG_CLASS_UNIVERSAL | (23 << 2)), 1, 0, 0 }, /* utcTime */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 1, 0, 0 } /* generalTime */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_8 = {
	sizeof(struct TBSCertList__revokedCertificates__Member),
	offsetof(struct TBSCertList__revokedCertificates__Member, _asn_ctx),
	asn_MAP_Member_tag2el_8,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_8 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_8,
	sizeof(asn_DEF_Member_tags_8)
		/sizeof(asn_DEF_Member_tags_8[0]), /* 1 */
	asn_DEF_Member_tags_8,	/* Same as above */
	sizeof(asn_DEF_Member_tags_8)
		/sizeof(asn_DEF_Member_tags_8[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_8,
	3,	/* Elements count */
	&asn_SPC_Member_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_revokedCertificates_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_revokedCertificates_tags_7[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_revokedCertificates_specs_7 = {
	sizeof(struct TBSCertList__revokedCertificates),
	offsetof(struct TBSCertList__revokedCertificates, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_revokedCertificates_7 = {
	"revokedCertificates",
	"revokedCertificates",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_revokedCertificates_tags_7,
	sizeof(asn_DEF_revokedCertificates_tags_7)
		/sizeof(asn_DEF_revokedCertificates_tags_7[0]), /* 1 */
	asn_DEF_revokedCertificates_tags_7,	/* Same as above */
	sizeof(asn_DEF_revokedCertificates_tags_7)
		/sizeof(asn_DEF_revokedCertificates_tags_7[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_revokedCertificates_7,
	1,	/* Single element */
	&asn_SPC_revokedCertificates_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TBSCertList_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TBSCertList, version),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Version,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertList, signature),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertList, issuer),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"issuer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertList, thisUpdate),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Time,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thisUpdate"
		},
	{ ATF_POINTER, 3, offsetof(struct TBSCertList, nextUpdate),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Time,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextUpdate"
		},
	{ ATF_POINTER, 2, offsetof(struct TBSCertList, revokedCertificates),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_revokedCertificates_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"revokedCertificates"
		},
	{ ATF_POINTER, 1, offsetof(struct TBSCertList, crlExtensions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Extensions,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crlExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_TBSCertList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TBSCertList_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* version */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 2 }, /* signature */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 1 }, /* rdnSequence */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -2, 0 }, /* revokedCertificates */
    { (ASN_TAG_CLASS_UNIVERSAL | (23 << 2)), 3, 0, 1 }, /* utcTime */
    { (ASN_TAG_CLASS_UNIVERSAL | (23 << 2)), 4, -1, 0 }, /* utcTime */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 3, 0, 1 }, /* generalTime */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 4, -1, 0 }, /* generalTime */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 6, 0, 0 } /* crlExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_TBSCertList_specs_1 = {
	sizeof(struct TBSCertList),
	offsetof(struct TBSCertList, _asn_ctx),
	asn_MAP_TBSCertList_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TBSCertList = {
	"TBSCertList",
	"TBSCertList",
	&asn_OP_SEQUENCE,
	asn_DEF_TBSCertList_tags_1,
	sizeof(asn_DEF_TBSCertList_tags_1)
		/sizeof(asn_DEF_TBSCertList_tags_1[0]), /* 1 */
	asn_DEF_TBSCertList_tags_1,	/* Same as above */
	sizeof(asn_DEF_TBSCertList_tags_1)
		/sizeof(asn_DEF_TBSCertList_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TBSCertList_1,
	7,	/* Elements count */
	&asn_SPC_TBSCertList_specs_1	/* Additional specs */
};


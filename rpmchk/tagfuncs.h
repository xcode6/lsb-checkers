/* idxtag.c */
void checkRpmIdx(RpmFile *file1, RpmHdrIndex *hidx, RpmIdxTagFuncRec Tags[], int numtags, struct tetj_handle *journal);
void checkRpmIdxSIGSIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxSIGMD5(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxSIGPGP(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxSIGNATURES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxIMMUTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxUNKNOWN(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxRELEASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxSERIAL(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxSUMMARY(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxOS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxARCH(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxPROVIDNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxREQUIREFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxREQUIRENAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
void checkRpmIdxREQUIREVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);

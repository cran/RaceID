// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// myVar
double myVar(double x, NumericVector v);
RcppExport SEXP _RaceID_myVar(SEXP xSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(myVar(x, v));
    return rcpp_result_gen;
END_RCPP
}
// mySize
double mySize(double x, NumericVector v);
RcppExport SEXP _RaceID_mySize(SEXP xSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(mySize(x, v));
    return rcpp_result_gen;
END_RCPP
}
// ProbFun
NumericVector ProbFun(NumericVector x, NumericVector v, NumericVector w);
RcppExport SEXP _RaceID_ProbFun(SEXP xSEXP, SEXP vSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(ProbFun(x, v, w));
    return rcpp_result_gen;
END_RCPP
}
// applyProb
NumericMatrix applyProb(NumericMatrix x, NumericVector v, NumericVector w);
RcppExport SEXP _RaceID_applyProb(SEXP xSEXP, SEXP vSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(applyProb(x, v, w));
    return rcpp_result_gen;
END_RCPP
}
// applyNoise
NumericVector applyNoise(IntegerMatrix x, NumericVector z, NumericVector co, double pv, NumericMatrix pvM);
RcppExport SEXP _RaceID_applyNoise(SEXP xSEXP, SEXP zSEXP, SEXP coSEXP, SEXP pvSEXP, SEXP pvMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type co(coSEXP);
    Rcpp::traits::input_parameter< double >::type pv(pvSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pvM(pvMSEXP);
    rcpp_result_gen = Rcpp::wrap(applyNoise(x, z, co, pv, pvM));
    return rcpp_result_gen;
END_RCPP
}
// applyNoiseReg
NumericVector applyNoiseReg(IntegerMatrix x, NumericVector z, NumericVector co, double pv, NumericMatrix pvM);
RcppExport SEXP _RaceID_applyNoiseReg(SEXP xSEXP, SEXP zSEXP, SEXP coSEXP, SEXP pvSEXP, SEXP pvMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type co(coSEXP);
    Rcpp::traits::input_parameter< double >::type pv(pvSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pvM(pvMSEXP);
    rcpp_result_gen = Rcpp::wrap(applyNoiseReg(x, z, co, pv, pvM));
    return rcpp_result_gen;
END_RCPP
}
// applyMean
NumericVector applyMean(IntegerMatrix x, NumericVector z, double pv, NumericMatrix pvM);
RcppExport SEXP _RaceID_applyMean(SEXP xSEXP, SEXP zSEXP, SEXP pvSEXP, SEXP pvMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type pv(pvSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pvM(pvMSEXP);
    rcpp_result_gen = Rcpp::wrap(applyMean(x, z, pv, pvM));
    return rcpp_result_gen;
END_RCPP
}
// applyMeanReg
NumericVector applyMeanReg(IntegerMatrix x, NumericVector z, double pv, NumericMatrix pvM);
RcppExport SEXP _RaceID_applyMeanReg(SEXP xSEXP, SEXP zSEXP, SEXP pvSEXP, SEXP pvMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type pv(pvSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pvM(pvMSEXP);
    rcpp_result_gen = Rcpp::wrap(applyMeanReg(x, z, pv, pvM));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _RaceID_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RaceID_myVar", (DL_FUNC) &_RaceID_myVar, 2},
    {"_RaceID_mySize", (DL_FUNC) &_RaceID_mySize, 2},
    {"_RaceID_ProbFun", (DL_FUNC) &_RaceID_ProbFun, 3},
    {"_RaceID_applyProb", (DL_FUNC) &_RaceID_applyProb, 3},
    {"_RaceID_applyNoise", (DL_FUNC) &_RaceID_applyNoise, 5},
    {"_RaceID_applyNoiseReg", (DL_FUNC) &_RaceID_applyNoiseReg, 5},
    {"_RaceID_applyMean", (DL_FUNC) &_RaceID_applyMean, 4},
    {"_RaceID_applyMeanReg", (DL_FUNC) &_RaceID_applyMeanReg, 4},
    {"_RaceID_rcpp_hello_world", (DL_FUNC) &_RaceID_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RaceID(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// aoadmmnmf
Rcpp::List aoadmmnmf(const arma::sp_mat& x, const int& k, const int& niter);
RcppExport SEXP _RcppPlanc_aoadmmnmf(SEXP xSEXP, SEXP kSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(aoadmmnmf(x, k, niter));
    return rcpp_result_gen;
END_RCPP
}
// gnsymnmf
Rcpp::List gnsymnmf(const arma::sp_mat& x, const int& k, const int& niter);
RcppExport SEXP _RcppPlanc_gnsymnmf(SEXP xSEXP, SEXP kSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(gnsymnmf(x, k, niter));
    return rcpp_result_gen;
END_RCPP
}
// halsnmf
Rcpp::List halsnmf(const arma::sp_mat& x, const int& k, const int& niter);
RcppExport SEXP _RcppPlanc_halsnmf(SEXP xSEXP, SEXP kSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(halsnmf(x, k, niter));
    return rcpp_result_gen;
END_RCPP
}
// munmf
Rcpp::List munmf(const arma::sp_mat& x, const int& k, const int& niter);
RcppExport SEXP _RcppPlanc_munmf(SEXP xSEXP, SEXP kSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(munmf(x, k, niter));
    return rcpp_result_gen;
END_RCPP
}
// bppnmf
Rcpp::List bppnmf(const arma::sp_mat& x, const int& k, const int& niter);
RcppExport SEXP _RcppPlanc_bppnmf(SEXP xSEXP, SEXP kSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(bppnmf(x, k, niter));
    return rcpp_result_gen;
END_RCPP
}
// bppnnls
arma::mat bppnnls(const arma::sp_mat& A, const arma::mat& B);
RcppExport SEXP _RcppPlanc_bppnnls(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(bppnnls(A, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppPlanc_aoadmmnmf", (DL_FUNC) &_RcppPlanc_aoadmmnmf, 3},
    {"_RcppPlanc_gnsymnmf", (DL_FUNC) &_RcppPlanc_gnsymnmf, 3},
    {"_RcppPlanc_halsnmf", (DL_FUNC) &_RcppPlanc_halsnmf, 3},
    {"_RcppPlanc_munmf", (DL_FUNC) &_RcppPlanc_munmf, 3},
    {"_RcppPlanc_bppnmf", (DL_FUNC) &_RcppPlanc_bppnmf, 3},
    {"_RcppPlanc_bppnnls", (DL_FUNC) &_RcppPlanc_bppnnls, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppPlanc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

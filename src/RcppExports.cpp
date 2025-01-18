// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppPlanc.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// nmf
Rcpp::List nmf(const SEXP& x, const arma::uword& k, const arma::uword& niter, const std::string& algo, const int& nCores, const Rcpp::Nullable<Rcpp::NumericMatrix>& Winit, const Rcpp::Nullable<Rcpp::NumericMatrix>& Hinit);
RcppExport SEXP _RcppPlanc_nmf(SEXP xSEXP, SEXP kSEXP, SEXP niterSEXP, SEXP algoSEXP, SEXP nCoresSEXP, SEXP WinitSEXP, SEXP HinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type algo(algoSEXP);
    Rcpp::traits::input_parameter< const int& >::type nCores(nCoresSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Winit(WinitSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Hinit(HinitSEXP);
    rcpp_result_gen = Rcpp::wrap(nmf(x, k, niter, algo, nCores, Winit, Hinit));
    return rcpp_result_gen;
END_RCPP
}
// symNMF
Rcpp::List symNMF(const SEXP& x, const arma::uword& k, const arma::uword& niter, const double& lambda, const std::string& algo, const int& nCores, const Rcpp::Nullable<Rcpp::NumericMatrix>& Hinit);
RcppExport SEXP _RcppPlanc_symNMF(SEXP xSEXP, SEXP kSEXP, SEXP niterSEXP, SEXP lambdaSEXP, SEXP algoSEXP, SEXP nCoresSEXP, SEXP HinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type algo(algoSEXP);
    Rcpp::traits::input_parameter< const int& >::type nCores(nCoresSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Hinit(HinitSEXP);
    rcpp_result_gen = Rcpp::wrap(symNMF(x, k, niter, lambda, algo, nCores, Hinit));
    return rcpp_result_gen;
END_RCPP
}
// bppinmf_h5
Rcpp::List bppinmf_h5(const std::vector<std::string>& filenames, const std::vector<std::string>& dataPath, const arma::uword k, const int& nCores, const double lambda, const arma::uword niter, const bool verbose, Rcpp::Nullable<std::vector<arma::mat>> Hinit, Rcpp::Nullable<std::vector<arma::mat>> Vinit, Rcpp::Nullable<arma::mat> Winit);
RcppExport SEXP _RcppPlanc_bppinmf_h5(SEXP filenamesSEXP, SEXP dataPathSEXP, SEXP kSEXP, SEXP nCoresSEXP, SEXP lambdaSEXP, SEXP niterSEXP, SEXP verboseSEXP, SEXP HinitSEXP, SEXP VinitSEXP, SEXP WinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type filenames(filenamesSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type dataPath(dataPathSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type nCores(nCoresSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::vector<arma::mat>> >::type Hinit(HinitSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::vector<arma::mat>> >::type Vinit(VinitSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::mat> >::type Winit(WinitSEXP);
    rcpp_result_gen = Rcpp::wrap(bppinmf_h5(filenames, dataPath, k, nCores, lambda, niter, verbose, Hinit, Vinit, Winit));
    return rcpp_result_gen;
END_RCPP
}
// bppinmf_h5sp
Rcpp::List bppinmf_h5sp(std::vector<std::string> filenames, std::vector<std::string> valuePath, std::vector<std::string> rowindPath, std::vector<std::string> colptrPath, arma::uvec nrow, arma::uvec ncol, arma::uword k, const int& nCores, double lambda, arma::uword niter, bool verbose, Rcpp::Nullable<std::vector<arma::mat>> Hinit, Rcpp::Nullable<std::vector<arma::mat>> Vinit, Rcpp::Nullable<arma::mat> Winit);
RcppExport SEXP _RcppPlanc_bppinmf_h5sp(SEXP filenamesSEXP, SEXP valuePathSEXP, SEXP rowindPathSEXP, SEXP colptrPathSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP kSEXP, SEXP nCoresSEXP, SEXP lambdaSEXP, SEXP niterSEXP, SEXP verboseSEXP, SEXP HinitSEXP, SEXP VinitSEXP, SEXP WinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type filenames(filenamesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type valuePath(valuePathSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rowindPath(rowindPathSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type colptrPath(colptrPathSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type nCores(nCoresSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::vector<arma::mat>> >::type Hinit(HinitSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::vector<arma::mat>> >::type Vinit(VinitSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::mat> >::type Winit(WinitSEXP);
    rcpp_result_gen = Rcpp::wrap(bppinmf_h5sp(filenames, valuePath, rowindPath, colptrPath, nrow, ncol, k, nCores, lambda, niter, verbose, Hinit, Vinit, Winit));
    return rcpp_result_gen;
END_RCPP
}
// bppinmf
Rcpp::List bppinmf(const Rcpp::List objectList, const arma::uword k, const int& nCores, const double lambda, const arma::uword niter, const bool verbose, Rcpp::Nullable<std::vector<arma::mat>> Hinit, Rcpp::Nullable<std::vector<arma::mat>> Vinit, Rcpp::Nullable<arma::mat> Winit);
RcppExport SEXP _RcppPlanc_bppinmf(SEXP objectListSEXP, SEXP kSEXP, SEXP nCoresSEXP, SEXP lambdaSEXP, SEXP niterSEXP, SEXP verboseSEXP, SEXP HinitSEXP, SEXP VinitSEXP, SEXP WinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type objectList(objectListSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type nCores(nCoresSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::vector<arma::mat>> >::type Hinit(HinitSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::vector<arma::mat>> >::type Vinit(VinitSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::mat> >::type Winit(WinitSEXP);
    rcpp_result_gen = Rcpp::wrap(bppinmf(objectList, k, nCores, lambda, niter, verbose, Hinit, Vinit, Winit));
    return rcpp_result_gen;
END_RCPP
}
// openblas_pthread_off
void openblas_pthread_off(Rcpp::XPtr<void*> libloc);
RcppExport SEXP _RcppPlanc_openblas_pthread_off(SEXP liblocSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<void*> >::type libloc(liblocSEXP);
    openblas_pthread_off(libloc);
    return R_NilValue;
END_RCPP
}
// openblas_pthread_on
void openblas_pthread_on(Rcpp::XPtr<void*> libloc);
RcppExport SEXP _RcppPlanc_openblas_pthread_on(SEXP liblocSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<void*> >::type libloc(liblocSEXP);
    openblas_pthread_on(libloc);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppPlanc_nmf", (DL_FUNC) &_RcppPlanc_nmf, 7},
    {"_RcppPlanc_symNMF", (DL_FUNC) &_RcppPlanc_symNMF, 7},
    {"_RcppPlanc_bppinmf_h5", (DL_FUNC) &_RcppPlanc_bppinmf_h5, 10},
    {"_RcppPlanc_bppinmf_h5sp", (DL_FUNC) &_RcppPlanc_bppinmf_h5sp, 14},
    {"_RcppPlanc_bppinmf", (DL_FUNC) &_RcppPlanc_bppinmf, 9},
    {"_RcppPlanc_openblas_pthread_off", (DL_FUNC) &_RcppPlanc_openblas_pthread_off, 1},
    {"_RcppPlanc_openblas_pthread_on", (DL_FUNC) &_RcppPlanc_openblas_pthread_on, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppPlanc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

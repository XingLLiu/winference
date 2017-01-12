// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// compute_cost1_
NumericMatrix compute_cost1_(const NumericVector& x, const NumericVector& y);
RcppExport SEXP winference_compute_cost1_(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    __result = Rcpp::wrap(compute_cost1_(x, y));
    return __result;
END_RCPP
}
// compute_cost2_
NumericMatrix compute_cost2_(const NumericVector& x, const NumericVector& y);
RcppExport SEXP winference_compute_cost2_(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    __result = Rcpp::wrap(compute_cost2_(x, y));
    return __result;
END_RCPP
}
// cost_matrix_L1_
NumericMatrix cost_matrix_L1_(const NumericMatrix& x, const NumericMatrix& y);
RcppExport SEXP winference_cost_matrix_L1_(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    __result = Rcpp::wrap(cost_matrix_L1_(x, y));
    return __result;
END_RCPP
}
// cost_matrix_L2_
NumericMatrix cost_matrix_L2_(const NumericMatrix& x, const NumericMatrix& y);
RcppExport SEXP winference_cost_matrix_L2_(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    __result = Rcpp::wrap(cost_matrix_L2_(x, y));
    return __result;
END_RCPP
}
// gandkinversecdf_
NumericVector gandkinversecdf_(NumericVector x, NumericVector theta);
RcppExport SEXP winference_gandkinversecdf_(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(gandkinversecdf_(x, theta));
    return __result;
END_RCPP
}
// gandkinversecdf_givennormals_
NumericVector gandkinversecdf_givennormals_(NumericVector normals, NumericVector theta);
RcppExport SEXP winference_gandkinversecdf_givennormals_(SEXP normalsSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type normals(normalsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(gandkinversecdf_givennormals_(normals, theta));
    return __result;
END_RCPP
}
// hilbert_order_
NumericVector hilbert_order_(NumericMatrix x);
RcppExport SEXP winference_hilbert_order_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(hilbert_order_(x));
    return __result;
END_RCPP
}
// levydriven_rtransition_rand_cpp
List levydriven_rtransition_rand_cpp(int nparticles, NumericVector& theta);
RcppExport SEXP winference_levydriven_rtransition_rand_cpp(SEXP nparticlesSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type nparticles(nparticlesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type theta(thetaSEXP);
    __result = Rcpp::wrap(levydriven_rtransition_rand_cpp(nparticles, theta));
    return __result;
END_RCPP
}
// median_rcpp
double median_rcpp(NumericVector x);
RcppExport SEXP winference_median_rcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(median_rcpp(x));
    return __result;
END_RCPP
}
// rmvnorm
NumericMatrix rmvnorm(int nsamples, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP winference_rmvnorm(SEXP nsamplesSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    __result = Rcpp::wrap(rmvnorm(nsamples, mean, covariance));
    return __result;
END_RCPP
}
// dmvnorm
NumericVector dmvnorm(const NumericMatrix& x, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP winference_dmvnorm(SEXP xSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    __result = Rcpp::wrap(dmvnorm(x, mean, covariance));
    return __result;
END_RCPP
}
// one_step_pz_vector
NumericMatrix one_step_pz_vector(NumericMatrix xparticles, NumericVector alphas, double t, NumericVector parameters);
RcppExport SEXP winference_one_step_pz_vector(SEXP xparticlesSEXP, SEXP alphasSEXP, SEXP tSEXP, SEXP parametersSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type xparticles(xparticlesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP);
    __result = Rcpp::wrap(one_step_pz_vector(xparticles, alphas, t, parameters));
    return __result;
END_RCPP
}
// pz_generate_randomness_cpp
NumericVector pz_generate_randomness_cpp(int nparticles, int datalength);
RcppExport SEXP winference_pz_generate_randomness_cpp(SEXP nparticlesSEXP, SEXP datalengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type nparticles(nparticlesSEXP);
    Rcpp::traits::input_parameter< int >::type datalength(datalengthSEXP);
    __result = Rcpp::wrap(pz_generate_randomness_cpp(nparticles, datalength));
    return __result;
END_RCPP
}
// pz_perturb_randomness_cpp
NumericVector pz_perturb_randomness_cpp(const NumericVector& randomness, double rho);
RcppExport SEXP winference_pz_perturb_randomness_cpp(SEXP randomnessSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type randomness(randomnessSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    __result = Rcpp::wrap(pz_perturb_randomness_cpp(randomness, rho));
    return __result;
END_RCPP
}
// systematic_resampling_
IntegerVector systematic_resampling_(const NumericVector& weights);
RcppExport SEXP winference_systematic_resampling_(SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    __result = Rcpp::wrap(systematic_resampling_(weights));
    return __result;
END_RCPP
}
// systematic_resampling_n_
IntegerVector systematic_resampling_n_(const NumericVector& weights, int ndraws, double u);
RcppExport SEXP winference_systematic_resampling_n_(SEXP weightsSEXP, SEXP ndrawsSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type ndraws(ndrawsSEXP);
    Rcpp::traits::input_parameter< double >::type u(uSEXP);
    __result = Rcpp::wrap(systematic_resampling_n_(weights, ndraws, u));
    return __result;
END_RCPP
}
// wasserstein_SAG_
List wasserstein_SAG_(NumericVector mu, NumericVector nu, NumericMatrix cost, double epsilon, int niterations, double stepsize);
RcppExport SEXP winference_wasserstein_SAG_(SEXP muSEXP, SEXP nuSEXP, SEXP costSEXP, SEXP epsilonSEXP, SEXP niterationsSEXP, SEXP stepsizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost(costSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type niterations(niterationsSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    __result = Rcpp::wrap(wasserstein_SAG_(mu, nu, cost, epsilon, niterations, stepsize));
    return __result;
END_RCPP
}
// wasserstein_SAG_auto_
List wasserstein_SAG_auto_(NumericVector mu, NumericVector nu, NumericMatrix cost, double epsilon, double tolerance, double stepsize, int maxiterations);
RcppExport SEXP winference_wasserstein_SAG_auto_(SEXP muSEXP, SEXP nuSEXP, SEXP costSEXP, SEXP epsilonSEXP, SEXP toleranceSEXP, SEXP stepsizeSEXP, SEXP maxiterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost(costSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    Rcpp::traits::input_parameter< int >::type maxiterations(maxiterationsSEXP);
    __result = Rcpp::wrap(wasserstein_SAG_auto_(mu, nu, cost, epsilon, tolerance, stepsize, maxiterations));
    return __result;
END_RCPP
}
// wasserstein_auto_
List wasserstein_auto_(NumericVector p_, NumericVector q_, NumericMatrix cost_matrix_, double epsilon, double desired_alpha);
RcppExport SEXP winference_wasserstein_auto_(SEXP p_SEXP, SEXP q_SEXP, SEXP cost_matrix_SEXP, SEXP epsilonSEXP, SEXP desired_alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type p_(p_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q_(q_SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost_matrix_(cost_matrix_SEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type desired_alpha(desired_alphaSEXP);
    __result = Rcpp::wrap(wasserstein_auto_(p_, q_, cost_matrix_, epsilon, desired_alpha));
    return __result;
END_RCPP
}
// eucl_distn_cpp
double eucl_distn_cpp(NumericVector x, NumericVector y);
RcppExport SEXP winference_eucl_distn_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    __result = Rcpp::wrap(eucl_distn_cpp(x, y));
    return __result;
END_RCPP
}
// h_cpp
double h_cpp(NumericVector x, NumericVector v, NumericVector nu, NumericMatrix y, double epsilon, double p);
RcppExport SEXP winference_h_cpp(SEXP xSEXP, SEXP vSEXP, SEXP nuSEXP, SEXP ySEXP, SEXP epsilonSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    __result = Rcpp::wrap(h_cpp(x, v, nu, y, epsilon, p));
    return __result;
END_RCPP
}
// grad_h_cpp
NumericVector grad_h_cpp(NumericVector x, NumericVector v, NumericVector nu, NumericMatrix y, double epsilon, double p);
RcppExport SEXP winference_grad_h_cpp(SEXP xSEXP, SEXP vSEXP, SEXP nuSEXP, SEXP ySEXP, SEXP epsilonSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    __result = Rcpp::wrap(grad_h_cpp(x, v, nu, y, epsilon, p));
    return __result;
END_RCPP
}
// dw_sgd_v_thresh_cpp
NumericVector dw_sgd_v_thresh_cpp(NumericMatrix samples, double c, NumericVector nu, NumericMatrix y, double epsilon, double thresh, double p);
RcppExport SEXP winference_dw_sgd_v_thresh_cpp(SEXP samplesSEXP, SEXP cSEXP, SEXP nuSEXP, SEXP ySEXP, SEXP epsilonSEXP, SEXP threshSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type thresh(threshSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    __result = Rcpp::wrap(dw_sgd_v_thresh_cpp(samples, c, nu, y, epsilon, thresh, p));
    return __result;
END_RCPP
}
// dw_sgd_v_cpp
NumericVector dw_sgd_v_cpp(NumericMatrix samples, double c, NumericVector nu, NumericMatrix y, double epsilon, double p);
RcppExport SEXP winference_dw_sgd_v_cpp(SEXP samplesSEXP, SEXP cSEXP, SEXP nuSEXP, SEXP ySEXP, SEXP epsilonSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    __result = Rcpp::wrap(dw_sgd_v_cpp(samples, c, nu, y, epsilon, p));
    return __result;
END_RCPP
}
// dw_est_cpp
double dw_est_cpp(NumericMatrix samples_for_est, NumericVector v, NumericVector nu, NumericMatrix y, double epsilon, double p);
RcppExport SEXP winference_dw_est_cpp(SEXP samples_for_estSEXP, SEXP vSEXP, SEXP nuSEXP, SEXP ySEXP, SEXP epsilonSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type samples_for_est(samples_for_estSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    __result = Rcpp::wrap(dw_est_cpp(samples_for_est, v, nu, y, epsilon, p));
    return __result;
END_RCPP
}
// wasserstein_
List wasserstein_(NumericVector p_, NumericVector q_, NumericMatrix cost_matrix_, double epsilon, int niterations);
RcppExport SEXP winference_wasserstein_(SEXP p_SEXP, SEXP q_SEXP, SEXP cost_matrix_SEXP, SEXP epsilonSEXP, SEXP niterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type p_(p_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q_(q_SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost_matrix_(cost_matrix_SEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type niterations(niterationsSEXP);
    __result = Rcpp::wrap(wasserstein_(p_, q_, cost_matrix_, epsilon, niterations));
    return __result;
END_RCPP
}
// wmean_
NumericVector wmean_(const NumericMatrix& x, const NumericVector& unnormalized_w);
RcppExport SEXP winference_wmean_(SEXP xSEXP, SEXP unnormalized_wSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type unnormalized_w(unnormalized_wSEXP);
    __result = Rcpp::wrap(wmean_(x, unnormalized_w));
    return __result;
END_RCPP
}
// wcovariance_
NumericMatrix wcovariance_(const NumericMatrix& x, const NumericVector& unnormalized_w, const NumericVector& xbar);
RcppExport SEXP winference_wcovariance_(SEXP xSEXP, SEXP unnormalized_wSEXP, SEXP xbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type unnormalized_w(unnormalized_wSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type xbar(xbarSEXP);
    __result = Rcpp::wrap(wcovariance_(x, unnormalized_w, xbar));
    return __result;
END_RCPP
}
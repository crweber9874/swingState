# include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]

using namespace Rcpp ;

// [[Rcpp::export()]]
List em1 (const arma::mat y,
          const arma::mat X,
          const int maxit = 10
          ) {
    // inputs
    const int N = y.n_rows ;
    const int K = X.n_cols ;

    // containers
    arma::mat beta(K, 1) ;
    beta.fill(0.0) ; // initialize betas to 1
    arma::mat eystar(N, 1) ;
    eystar.fill(0) ;

    // algorithm
    for (int it = 0 ; it < maxit ; it++) { // EM iterations
        // NEXT STEP: implement algorithm
    }

    // returns
    List ret ;
    ret["N"] = N ;
    ret["K"] = K ;
    ret["beta"] = beta ;
    ret["eystar"] = eystar ;
    return(ret) ;
}
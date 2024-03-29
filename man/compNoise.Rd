% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/VarID_functions.R
\name{compNoise}
\alias{compNoise}
\title{Function for computing local gene expression variability}
\usage{
compNoise(
  x,
  res,
  pvalue = 0.01,
  genes = NULL,
  regNB = FALSE,
  batch = NULL,
  regVar = NULL,
  offsetModel = TRUE,
  thetaML = FALSE,
  theta = 10,
  ngenes = NULL,
  span = 0.75,
  step = 0.01,
  thr = 0.05,
  no_cores = NULL,
  seed = 12345
)
}
\arguments{
\item{x}{Matrix of gene expression values with genes as rows and cells as columns. The matrix need to contain the same cell IDs as columns like the input matrix used to derive the pruned k nearest neighbours with the \code{pruneKnn} function. However, it may contain a different set of genes.}

\item{res}{List object with k nearest neighbour information returned by \code{pruneKnn} function.}

\item{pvalue}{Positive real number between 0 and 1. All nearest neighbours with link probability \code{< pvalue} are discarded. Default is 0.01.}

\item{genes}{Vector of gene names corresponding to a subset of rownames of \code{x}. Only for these genes local gene expression variability is computed. Default is \code{NULL} and values for all genes are returned.}

\item{regNB}{logical. If \code{TRUE} then gene expression variability is derived from the pearson residuals obtained from a negative binomial regression to eliminate the dependence of the expression variance on the mean. If \code{FALSE} then the mean dependence is regressed out from the raw variance using the baseline variance estimate. Default is \code{FALSE}.}

\item{batch}{vector of batch variables. Component names need to correspond to valid cell IDs, i.e. column names of \code{expData}. If \code{regNB} is \code{TRUE}, than the batch variable will be regressed out simultaneously with the log UMI count per cell. An interaction term is included for the log UMI count with the batch variable. Default value is \code{NULL}.}

\item{regVar}{data.frame with additional variables to be regressed out simultaneously with the log UMI count and the batch variable (if \code{batch} is \code{TRUE}). Column names indicate variable names (name \code{beta} is reserved for the coefficient of the log UMI count), and rownames need to correspond to valid cell IDs, i.e. column names of \code{expData}. Interaction terms are included for each variable in \code{regVar} with the batch variable (if \code{batch} is \code{TRUE}). Default value is \code{NULL}.}

\item{offsetModel}{Logical parameter. Only considered if \code{regNB} is \code{TRUE}. If \code{TRUE} then the \code{beta} (log UMI count) coefficient is set to 1 and the intercept is computed analytically as the log ration of UMI counts for a gene and the total UMI count across all cells. Batch variables and additional variables in \code{regVar} are regressed out with an offset term given by the sum of the intercept and the log UMI count. Default is \code{TRUE}.}

\item{thetaML}{Logical parameter. Only considered if \code{offsetModel} equals \code{TRUE}. If \code{TRUE} then the dispersion parameter is estimated by a maximum likelihood fit. Otherwise, it is set to \code{theta}. Default is \code{FALSE}.}

\item{theta}{Positive real number. Fixed value of the dispersion parameter. Only considered if \code{theaML} equals \code{FALSE}.}

\item{ngenes}{Positive integer number. Randomly sampled number of genes (from rownames of \code{expData}) used for predicting regression coefficients (if \code{regNB=TRUE}). Smoothed coefficients are derived for all genes. Default is \code{NULL} and all genes are used.}

\item{span}{Positive real number. Parameter for loess-regression (see \code{regNB}) controlling the degree of smoothing. Default is 0.75.}

\item{step}{Positive real number between 0 and 1. See function \code{noiseBaseFit}. Default is 0.01.}

\item{thr}{Positive real number between 0 and 1. See function \code{noiseBaseFit}. Default is 0.05.}

\item{no_cores}{Positive integer number. Number of cores for multithreading. If set to \code{NULL} then the number of available cores minus two is used. Default is \code{NULL}.}

\item{seed}{Integer number. Random number to initialize stochastic routines. Default is 12345.}
}
\value{
List object of three components:
\item{model}{the baseline noise model as computed by the \code{noiseBaseFit} function.}
\item{data}{matrix with local gene expression variability estimates, corrected for the mean dependence.}
\item{regData}{If \code{regNB=TRUE} this argument contains a list of four components: component \code{pearsonRes} contains a matrix of the Pearson Residual computed from the negative binomial regression, component \code{nbRegr} contains a matrix with the regression coefficients, component \code{nbRegrSmooth} contains a matrix with the smoothed regression coefficients, and \code{log_umi} is a vector with the total log UMI count for each cell. The regression coefficients comprise the dispersion parameter theta, the intercept, the regression coefficient beta for the log UMI count, and the regression coefficients of the batches (if \code{batch} is not \code{NULL}).}
}
\description{
This function performs computation of the local gene expression variability across the pruned k nearest neighbours at given link probability cutoff. The estimated variance is corrected for the mean dependence utilizing the baseline model of gene expression variance.
}
\examples{
res <- pruneKnn(intestinalDataSmall,knn=10,alpha=1,no_cores=1,FSelect=FALSE)
noise <- compNoise(intestinalDataSmall,res,pvalue=0.01,genes = NULL,no_cores=1)
}

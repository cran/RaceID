% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/VarID_functions.R
\name{compTBNoise}
\alias{compTBNoise}
\title{Function for fitting a negative binomial noise model of technical and biological variability across cells in pruned k-nearest neighbourhoods.}
\usage{
compTBNoise(
  res,
  expData,
  pvalue = 0.01,
  genes = NULL,
  minN = 5,
  no_cores = NULL,
  gamma = 0.5,
  x0 = 0,
  lower = 0,
  upper = 100
)
}
\arguments{
\item{res}{List object with k nearest neighbour information returned by \code{pruneKnn} function.}

\item{expData}{Matrix of gene expression values with genes as rows and cells as columns. These values have to correspond to unique molecular identifier counts.}

\item{pvalue}{Positive real number between 0 and 1. All nearest neighbours with link probability \code{< pvalue} are discarded. Default is 0.01.}

\item{genes}{Vector of gene names corresponding to a subset of rownames of \code{expData}. Only for these genes local gene expression variability is computed. Default is \code{NULL} and values for all genes are returned.}

\item{minN}{Positive integer number. Noise inference is only done for k-nearest neighbourhoods with at least \code{minN} neighbours remaining after pruning.}

\item{no_cores}{Positive integer number. Number of cores for multithreading. If set to \code{NULL} then the number of available cores minus two is used. Default is \code{NULL}.}

\item{gamma}{Positive real number. Scale paramter of the cauchy prior. Default is 0.5.}

\item{x0}{Real number greater or equal to zero. Location parameter of the cauchy prior.}

\item{lower}{Real number greater or equal to zero. Lower bound for the maximum a posterior inference of the biological noise. Default is 0.}

\item{upper}{Real number greater or equal to zero. Upper bound for the maximum a posterior inference of the biological noise. Default is 100.}
}
\value{
List object of three components:
\item{mu}{Vector of mean expression for all k-nearest neighbourhoods. Componenets are set to \code{NA} if less than \code{minN} neighbours are present in pruned neighbourhood. }
\item{rt}{Vector of dispersion parameters capturing global cell-to-cell variability of transcript counts for all k-nearest neighbourhoods. Componenets are set to \code{NA} if less than \code{minN} neighbours are present in pruned neighbourhood.}
\item{epsilon}{Matrix of biological noise estimates for all genes across for all k-nearest neighbourhoods. Componenets are set to \code{NA} if less than \code{minN} neighbours present in pruned neighbourhood.}
\item{pars}{List of parameters.}
}
\description{
This function fits negative binomial models to transcript counts of pruned k-nearest neighbourhoods inferred by \code{pruneKnn} thereby deconvoluting variability into sampling noise, global cell-to-cell variability of transcript counts, and residual variability, which corresponds to biological noise.
}
\examples{
\dontrun{
res <- pruneKnn(intestinalDataSmall,knn=10,alpha=1,no_cores=1,FSelect=FALSE)
noise <- compTBNoise(res,intestinalDataSmall,pvalue=0.01,genes = NULL,no_cores=1)
}
}

#!/bin/bash

g++ -std=c++14 -o main main.cc

INDIR="../testcase/input"
RESDIR="../testcase/result"
OUTDIR="../testcase/output"

RES=0
for f in `\ls ${INDIR}`
do
    echo $f

    ./main < "${INDIR}/${f}" > "${RESDIR}/${f}"
    # echo 1 > "${RESDIR}/${f}"

    # diff "${RESDIR}/${f}" "${OUTDIR}/${f}" > /dev/null
    # echo $? 
    ! diff "${RESDIR}/${f}" "${OUTDIR}/${f}" > /dev/null && RES=1 && break
done

# echo $RES
if [ $RES -eq 0 ]
then
    echo "AC"
elif [ $RES -eq 1 ]
then
    echo "WA"
fi

rm main 
rm ${RESDIR}/*

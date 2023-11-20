#!/bin/bash

# 디렉토리 설정
SRCDIR=.
BINDIR=./bin

# .o 파일을 찾아서 실행 파일로 변환
for objfile in $BINDIR/*.o; do
    # .o 파일명에서 확장자를 제외한 부분 추출
    filename=$(basename "$objfile" .o)

    # 실행 파일 생성
    gcc "$objfile" -o "$BINDIR/$filename"
done

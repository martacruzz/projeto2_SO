#!/bin/bash

rm -f error*
rm -f core

#unsafe
key=$(ipcs | grep " 120 " | cut -d\  -f1)

if [[ -z $key ]]
then
   echo Did not find soccergame IPC resources
   exit 1
fi

ipcrm -S $key
ipcrm -M $key


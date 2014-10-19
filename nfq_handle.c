/*
 * =====================================================================================
 *
 *       Filename:  nfq_handle.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月03日 19时20分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  mark finch (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <linux/types.h>
#include <linux/netfilter.h>
#include <libnetfilter_queue/libnetfilter_queue.h>

int main(int argc, char **argv)
{
    struct nfq_handle *h;
        h=nfq_open();
        return 0;
}


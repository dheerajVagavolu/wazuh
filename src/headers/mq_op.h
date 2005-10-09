/*   $OSSEC, mq_op.h, v0.3, 2005/07/20, Daniel B. Cid$   */

/* Copyright (C) 2004 Daniel B. Cid <dcid@ossec.net>
 * All rights reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */


#ifndef _MQ__H
#define _MQ__H

#define LOCALFILE_MQ 	'1'
#define SYSLOG_MQ	    '2'
#define SECURE_MQ	    '4'
#define SNORT_MQ_FULL   '5'
#define SNORT_MQ_FAST   '6'
#define APACHERR_MQ	    '7'
#define SYSCHECK_MQ     '8'
#define ROOTCHECK_MQ    '9'


int StartMQ(char * key,short int type);

int FinishMQ();

int SendMSG(int queue, char * message, char *locmsg, 
                       char *logroup, char loc);

#endif

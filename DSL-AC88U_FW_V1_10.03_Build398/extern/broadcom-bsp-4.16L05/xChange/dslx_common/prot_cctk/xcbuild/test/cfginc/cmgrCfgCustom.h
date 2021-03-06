/**********************************************************************************
** Copyright � 2008 Broadcom
**
** This program  is the  proprietary software  of Broadcom  Corporation and/or  its
** licensors, and may only be used, duplicated, modified or distributed pursuant to
** the  terms and  conditions of  a separate,  written license  agreement executed
** between you and Broadcom (an "Authorized  License").  Except as set forth in  an
** Authorized License, Broadcom  grants no license  (express or implied),  right to
** use, or waiver of any kind with respect to the Software, and Broadcom  expressly
** reserves all rights in and to the Software and all intellectual property  rights
** therein.  IF YOU HAVE NO AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE  THIS
** SOFTWARE IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE  ALL
** USE OF THE SOFTWARE.
**
** Except as expressly set forth in the Authorized License,
**
** 1.      This  program,  including  its  structure,  sequence  and  organization,
** constitutes  the valuable  trade secrets  of Broadcom,  and you  shall use  all
** reasonable  efforts to  protect the  confidentiality thereof,  and to  use this
** information only  in connection  with your  use of  Broadcom integrated  circuit
** products.
**
** 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS  IS"
** AND  WITH  ALL  FAULTS  AND  BROADCOM  MAKES  NO  PROMISES,  REPRESENTATIONS  OR
** WARRANTIES, EITHER EXPRESS,  IMPLIED, STATUTORY, OR  OTHERWISE, WITH RESPECT  TO
** THE SOFTWARE.  BROADCOM SPECIFICALLY DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF
** TITLE, MERCHANTABILITY, NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE,  LACK
** OF  VIRUSES,  ACCURACY OR  COMPLETENESS,  QUIET ENJOYMENT,  QUIET  POSSESSION OR
** CORRESPONDENCE TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING OUT OF USE  OR
** PERFORMANCE OF THE SOFTWARE.
**
** 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM OR ITS
** LICENSORS BE  LIABLE FOR  (i) CONSEQUENTIAL,  INCIDENTAL, SPECIAL,  INDIRECT, OR
** EXEMPLARY DAMAGES WHATSOEVER ARISING OUT OF  OR IN ANY WAY RELATING TO  YOUR USE
** OF OR INABILITY  TO USE THE  SOFTWARE EVEN IF  BROADCOM HAS BEEN  ADVISED OF THE
** POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN EXCESS OF THE AMOUNT ACTUALLY
** PAID FOR THE SOFTWARE ITSELF OR U.S. $1, WHICHEVER IS GREATER. THESE LIMITATIONS
** SHALL APPLY  NOTWITHSTANDING ANY  FAILURE OF  ESSENTIAL PURPOSE  OF ANY  LIMITED
** REMEDY.
***********************************************************************************/

/***********************************************************************************
**
**    Description:
**
**      This file contains the custom configuration headers for cmgrCfg.h.
**
***********************************************************************************/

#ifndef __CMGR_CFG_CUSTOM__H__INCLUDED__
#define __CMGR_CFG_CUSTOM__H__INCLUDED__

/*
** -- Maximum users --
**
** This defines the maximum number of users managed by the Call Manager at any
** one time.
*/
#undef CMGRCFG_USER_MAX
#define CMGRCFG_USER_MAX                                                      2


/*
** -- Maximum media session and service session --
**
** This defines the maximum number of media (i.e. call related) session and
** service (i.e. non call related) session managed *PER USER*.
*/
#undef CMGRCFG_MEDSES_MAX
#define CMGRCFG_MEDSES_MAX                                 2 * CMGRCFG_USER_MAX

#undef CMGRCFG_SRVSES_MAX
#define CMGRCFG_SRVSES_MAX                                 2 * CMGRCFG_USER_MAX


/*
** -- Configuration profile  --
**
** This feature allows enabling of a specific configuration profile, which is an
** association between the configuration data and how it is used to produce an
** application which may behave differently based on this setting.
**
** Values are:
**
**      - CMGRCFG_CFG_PROFILE_RFC3261, this is the default RFC 3261 based
**        application configuration profile.
**
**      - CMGRCFG_CFG_PROFILE_IMS, this is the default IMS (3GPP TS 24.229) based
**        application configuration profile.
**
**      - CMGRCFG_CFG_PROFILE_STANDALONE, this is the application profile to use
**        when the application is to be run in standalone mode (neither of the
**        above).
**
**      - CMGRCFG_CFG_PROFILE_CUSTOM, this is room for expansion and specific
**        customization.
*/
#undef CMGRCFG_CFG_PROFILE
#define CMGRCFG_CFG_PROFILE                  CMGRCFG_CFG_PROFILE_RFC3261


/*
** -- Keep Alive for Signaling --
**
** The following configuration element determines whether to use keep alive for
** signaling or not.  Keep alive for signaling is implemented through the
** mechanisms of 'sip-outbound' (IETF draft), it may render an application totally
** useless if such feature is not available on the target proxy however, for that
** reason it is disabled by default.
*/
#undef CMGRCFG_OUTBOUND_KEEP_ALIVE
#define CMGRCFG_OUTBOUND_KEEP_ALIVE                                    0


/*
** -- Report debug information through CMGREVTCB --
**
** This enables the sending some internal debugging information to the 
** application via the CMGREVTCB. This is for debugging purposes use only.
** 
*/
#undef CMGRCFG_DEBUG_INFO
#define CMGRCFG_DEBUG_INFO                                             1


/*
** -- Call Manager feature support.
*/
#define CMGR__FEATURE__AUTOMATIC_CALL_REJECTION
#define CMGR__FEATURE__AUTOMATIC_CALLBACK
#define CMGR__FEATURE__AUTOMATIC_RECALL
#define CMGR__FEATURE__CLID_SUPPRESSION
#define CMGR__FEATURE__CLID_DELIVERY
#define CMGR__FEATURE__CUSTOMER_ORIGINATED_TRACE
#define CMGR__FEATURE__DISTINCTIVE_ALERTING
#define CMGR__FEATURE__DO_NOT_DISTURB
#define CMGR__FEATURE__HOLD_ACTIVATE
#define CMGR__FEATURE__CALL_WAITING
#define CMGR__FEATURE__CALL_FORWARD_VARIABLE
#define CMGR__FEATURE__SELECTIVE_CALL_FORWARD
#define CMGR__FEATURE__SOLICITOR_BLOCKING
#define CMGR__FEATURE__SPEED_DIAL_PROGRAMMING
#define CMGR__FEATURE__SUBSCRIBER_PIN
#define CMGR__FEATURE__EMERGENCY_CALL





#endif /* __CMGR_CFG_CUSTOM__H__INCLUDED__ */

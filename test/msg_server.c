/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "msg.h"

int *
psu_dsm_page_find_1_svc(pageid_t *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

host_t *
psu_dsm_page_locate_1_svc(pageit_T *argp, struct svc_req *rqstp)
{
	static host_t  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
psu_dsm_page_creat_1_svc(pageid_t *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
psu_dsm_page_update_1_svc(request_t *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

page_t *
psu_dsm_page_request_1_svc(request_t *argp, struct svc_req *rqstp)
{
	static page_t  result;

	/*
	 * insert server code here
	 */

	return &result;
}

page_t *
psu_dsm_page_fetch_1_svc(request_t *argp, struct svc_req *rqstp)
{
	static page_t  result;

	/*
	 * insert server code here
	 */

	return &result;
}

void *
psu_dsm_page_ack_1_svc(pageid_t *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}

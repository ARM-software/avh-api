#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscriber_invite.h"



static subscriber_invite_t *subscriber_invite_create_internal(
    coupon_options_t *coupon_options,
    plan_t *plan,
    trial_t *trial,
    char *name,
    char *email,
    char *coupon_code,
    char *domain,
    char *aggregate,
    char *use_by,
    int active,
    int reusable,
    char *created_at,
    char *updated_at
    ) {
    subscriber_invite_t *subscriber_invite_local_var = malloc(sizeof(subscriber_invite_t));
    if (!subscriber_invite_local_var) {
        return NULL;
    }
    subscriber_invite_local_var->coupon_options = coupon_options;
    subscriber_invite_local_var->plan = plan;
    subscriber_invite_local_var->trial = trial;
    subscriber_invite_local_var->name = name;
    subscriber_invite_local_var->email = email;
    subscriber_invite_local_var->coupon_code = coupon_code;
    subscriber_invite_local_var->domain = domain;
    subscriber_invite_local_var->aggregate = aggregate;
    subscriber_invite_local_var->use_by = use_by;
    subscriber_invite_local_var->active = active;
    subscriber_invite_local_var->reusable = reusable;
    subscriber_invite_local_var->created_at = created_at;
    subscriber_invite_local_var->updated_at = updated_at;

    subscriber_invite_local_var->_library_owned = 1;
    return subscriber_invite_local_var;
}

__attribute__((deprecated)) subscriber_invite_t *subscriber_invite_create(
    coupon_options_t *coupon_options,
    plan_t *plan,
    trial_t *trial,
    char *name,
    char *email,
    char *coupon_code,
    char *domain,
    char *aggregate,
    char *use_by,
    int active,
    int reusable,
    char *created_at,
    char *updated_at
    ) {
    return subscriber_invite_create_internal (
        coupon_options,
        plan,
        trial,
        name,
        email,
        coupon_code,
        domain,
        aggregate,
        use_by,
        active,
        reusable,
        created_at,
        updated_at
        );
}

void subscriber_invite_free(subscriber_invite_t *subscriber_invite) {
    if(NULL == subscriber_invite){
        return ;
    }
    if(subscriber_invite->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subscriber_invite_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subscriber_invite->coupon_options) {
        coupon_options_free(subscriber_invite->coupon_options);
        subscriber_invite->coupon_options = NULL;
    }
    if (subscriber_invite->plan) {
        plan_free(subscriber_invite->plan);
        subscriber_invite->plan = NULL;
    }
    if (subscriber_invite->trial) {
        trial_free(subscriber_invite->trial);
        subscriber_invite->trial = NULL;
    }
    if (subscriber_invite->name) {
        free(subscriber_invite->name);
        subscriber_invite->name = NULL;
    }
    if (subscriber_invite->email) {
        free(subscriber_invite->email);
        subscriber_invite->email = NULL;
    }
    if (subscriber_invite->coupon_code) {
        free(subscriber_invite->coupon_code);
        subscriber_invite->coupon_code = NULL;
    }
    if (subscriber_invite->domain) {
        free(subscriber_invite->domain);
        subscriber_invite->domain = NULL;
    }
    if (subscriber_invite->aggregate) {
        free(subscriber_invite->aggregate);
        subscriber_invite->aggregate = NULL;
    }
    if (subscriber_invite->use_by) {
        free(subscriber_invite->use_by);
        subscriber_invite->use_by = NULL;
    }
    if (subscriber_invite->created_at) {
        free(subscriber_invite->created_at);
        subscriber_invite->created_at = NULL;
    }
    if (subscriber_invite->updated_at) {
        free(subscriber_invite->updated_at);
        subscriber_invite->updated_at = NULL;
    }
    free(subscriber_invite);
}

cJSON *subscriber_invite_convertToJSON(subscriber_invite_t *subscriber_invite) {
    cJSON *item = cJSON_CreateObject();

    // subscriber_invite->coupon_options
    if(subscriber_invite->coupon_options) {
    cJSON *coupon_options_local_JSON = coupon_options_convertToJSON(subscriber_invite->coupon_options);
    if(coupon_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "coupon_options", coupon_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // subscriber_invite->plan
    if(subscriber_invite->plan) {
    cJSON *plan_local_JSON = plan_convertToJSON(subscriber_invite->plan);
    if(plan_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "plan", plan_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // subscriber_invite->trial
    if(subscriber_invite->trial) {
    cJSON *trial_local_JSON = trial_convertToJSON(subscriber_invite->trial);
    if(trial_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "trial", trial_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // subscriber_invite->name
    if(subscriber_invite->name) {
    if(cJSON_AddStringToObject(item, "name", subscriber_invite->name) == NULL) {
    goto fail; //String
    }
    }


    // subscriber_invite->email
    if(subscriber_invite->email) {
    if(cJSON_AddStringToObject(item, "email", subscriber_invite->email) == NULL) {
    goto fail; //String
    }
    }


    // subscriber_invite->coupon_code
    if (!subscriber_invite->coupon_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "coupon_code", subscriber_invite->coupon_code) == NULL) {
    goto fail; //String
    }


    // subscriber_invite->domain
    if(subscriber_invite->domain) {
    if(cJSON_AddStringToObject(item, "domain", subscriber_invite->domain) == NULL) {
    goto fail; //String
    }
    }


    // subscriber_invite->aggregate
    if (!subscriber_invite->aggregate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "aggregate", subscriber_invite->aggregate) == NULL) {
    goto fail; //String
    }


    // subscriber_invite->use_by
    if(subscriber_invite->use_by) {
    if(cJSON_AddStringToObject(item, "use_by", subscriber_invite->use_by) == NULL) {
    goto fail; //String
    }
    }


    // subscriber_invite->active
    if (!subscriber_invite->active) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "active", subscriber_invite->active) == NULL) {
    goto fail; //Bool
    }


    // subscriber_invite->reusable
    if (!subscriber_invite->reusable) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "reusable", subscriber_invite->reusable) == NULL) {
    goto fail; //Bool
    }


    // subscriber_invite->created_at
    if (!subscriber_invite->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "createdAt", subscriber_invite->created_at) == NULL) {
    goto fail; //String
    }


    // subscriber_invite->updated_at
    if (!subscriber_invite->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updatedAt", subscriber_invite->updated_at) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subscriber_invite_t *subscriber_invite_parseFromJSON(cJSON *subscriber_inviteJSON){

    subscriber_invite_t *subscriber_invite_local_var = NULL;

    // define the local variable for subscriber_invite->coupon_options
    coupon_options_t *coupon_options_local_nonprim = NULL;

    // define the local variable for subscriber_invite->plan
    plan_t *plan_local_nonprim = NULL;

    // define the local variable for subscriber_invite->trial
    trial_t *trial_local_nonprim = NULL;

    // subscriber_invite->coupon_options
    cJSON *coupon_options = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "coupon_options");
    if (cJSON_IsNull(coupon_options)) {
        coupon_options = NULL;
    }
    if (coupon_options) { 
    coupon_options_local_nonprim = coupon_options_parseFromJSON(coupon_options); //nonprimitive
    }

    // subscriber_invite->plan
    cJSON *plan = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "plan");
    if (cJSON_IsNull(plan)) {
        plan = NULL;
    }
    if (plan) { 
    plan_local_nonprim = plan_parseFromJSON(plan); //nonprimitive
    }

    // subscriber_invite->trial
    cJSON *trial = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "trial");
    if (cJSON_IsNull(trial)) {
        trial = NULL;
    }
    if (trial) { 
    trial_local_nonprim = trial_parseFromJSON(trial); //nonprimitive
    }

    // subscriber_invite->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // subscriber_invite->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }
    }

    // subscriber_invite->coupon_code
    cJSON *coupon_code = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "coupon_code");
    if (cJSON_IsNull(coupon_code)) {
        coupon_code = NULL;
    }
    if (!coupon_code) {
        goto end;
    }

    
    if(!cJSON_IsString(coupon_code))
    {
    goto end; //String
    }

    // subscriber_invite->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "domain");
    if (cJSON_IsNull(domain)) {
        domain = NULL;
    }
    if (domain) { 
    if(!cJSON_IsString(domain))
    {
    goto end; //String
    }
    }

    // subscriber_invite->aggregate
    cJSON *aggregate = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "aggregate");
    if (cJSON_IsNull(aggregate)) {
        aggregate = NULL;
    }
    if (!aggregate) {
        goto end;
    }

    
    if(!cJSON_IsString(aggregate))
    {
    goto end; //String
    }

    // subscriber_invite->use_by
    cJSON *use_by = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "use_by");
    if (cJSON_IsNull(use_by)) {
        use_by = NULL;
    }
    if (use_by) { 
    if(!cJSON_IsString(use_by))
    {
    goto end; //String
    }
    }

    // subscriber_invite->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (!active) {
        goto end;
    }

    
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }

    // subscriber_invite->reusable
    cJSON *reusable = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "reusable");
    if (cJSON_IsNull(reusable)) {
        reusable = NULL;
    }
    if (!reusable) {
        goto end;
    }

    
    if(!cJSON_IsBool(reusable))
    {
    goto end; //Bool
    }

    // subscriber_invite->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "createdAt");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // subscriber_invite->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(subscriber_inviteJSON, "updatedAt");
    if (cJSON_IsNull(updated_at)) {
        updated_at = NULL;
    }
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }


    subscriber_invite_local_var = subscriber_invite_create_internal (
        coupon_options ? coupon_options_local_nonprim : NULL,
        plan ? plan_local_nonprim : NULL,
        trial ? trial_local_nonprim : NULL,
        name ? strdup(name->valuestring) : NULL,
        email ? strdup(email->valuestring) : NULL,
        strdup(coupon_code->valuestring),
        domain ? strdup(domain->valuestring) : NULL,
        strdup(aggregate->valuestring),
        use_by ? strdup(use_by->valuestring) : NULL,
        active->valueint,
        reusable->valueint,
        strdup(created_at->valuestring),
        strdup(updated_at->valuestring)
        );

    return subscriber_invite_local_var;
end:
    if (coupon_options_local_nonprim) {
        coupon_options_free(coupon_options_local_nonprim);
        coupon_options_local_nonprim = NULL;
    }
    if (plan_local_nonprim) {
        plan_free(plan_local_nonprim);
        plan_local_nonprim = NULL;
    }
    if (trial_local_nonprim) {
        trial_free(trial_local_nonprim);
        trial_local_nonprim = NULL;
    }
    return NULL;

}

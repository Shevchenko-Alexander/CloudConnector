// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/iam/admin/v1/iam.proto
#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CLIENT_H

#include "google/cloud/iam/iam_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

/**
 * Creates and manages Identity and Access Management (IAM) resources.
 *
 * You can use this service to work with all of the following resources:
 *
 * * **Service accounts**, which identify an application or a virtual machine
 *   (VM) instance rather than a person
 * * **Service account keys**, which service accounts use to authenticate with
 *   Google APIs
 * * **IAM policies for service accounts**, which specify the roles that a
 *   member has for the service account
 * * **IAM custom roles**, which help you limit the number of permissions that
 *   you grant to members
 *
 * In addition, you can use this service to complete the following tasks, among
 * others:
 *
 * * Test whether a service account can use specific permissions
 * * Check which roles you can grant for a specific resource
 * * Lint, or validate, condition expressions in an IAM policy
 */
class IAMClient {
 public:
  explicit IAMClient(std::shared_ptr<IAMConnection> connection);
  ~IAMClient();

  //@{
  // @name Copy and move support
  IAMClient(IAMClient const&) = default;
  IAMClient& operator=(IAMClient const&) = default;
  IAMClient(IAMClient&&) noexcept = default;
  IAMClient& operator=(IAMClient&&) noexcept = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(IAMClient const& a, IAMClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(IAMClient const& a, IAMClient const& b) {
    return !(a == b);
  }
  //@}

  /**
   * Lists every [ServiceAccount][google.iam.admin.v1.ServiceAccount] that
   * belongs to a specific project.
   *
   * @param name  Required. The resource name of the project associated with the
   * service accounts, such as `projects/my-project-123`.
   */
  StreamRange<google::iam::admin::v1::ServiceAccount> ListServiceAccounts(
      std::string const& name);

  /**
   * Gets a [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * @param name  Required. The resource name of the service account in the
   * following format: `projects/{PROJECT_ID}/serviceAccounts/{ACCOUNT}`. Using
   * `-` as a wildcard for the `PROJECT_ID` will infer the project from the
   * account. The `ACCOUNT` value can be the `email` address or the `unique_id`
   * of the service account.
   * @return
   * [google::iam::admin::v1::ServiceAccount](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L461)
   */
  StatusOr<google::iam::admin::v1::ServiceAccount> GetServiceAccount(
      std::string const& name);

  /**
   * Creates a [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * @param name  Required. The resource name of the project associated with the
   * service accounts, such as `projects/my-project-123`.
   * @param account_id  Required. The account id that is used to generate the
   * service account email address and a stable unique id. It is unique within a
   * project, must be 6-30 characters long, and match the regular expression
   *  `[a-z]([-a-z0-9]*[a-z0-9])` to comply with RFC1035.
   * @param service_account  The
   * [ServiceAccount][google.iam.admin.v1.ServiceAccount] resource to create.
   * Currently, only the following values are user assignable: `display_name`
   * and `description`.
   * @return
   * [google::iam::admin::v1::ServiceAccount](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L461)
   */
  StatusOr<google::iam::admin::v1::ServiceAccount> CreateServiceAccount(
      std::string const& name, std::string const& account_id,
      google::iam::admin::v1::ServiceAccount const& service_account);

  /**
   * Deletes a [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * **Warning:** After you delete a service account, you might not be able to
   * undelete it. If you know that you need to re-enable the service account in
   * the future, use
   * [DisableServiceAccount][google.iam.admin.v1.IAM.DisableServiceAccount]
   * instead.
   *
   * If you delete a service account, IAM permanently removes the service
   * account 30 days later. Google Cloud cannot recover the service account
   * after it is permanently removed, even if you file a support request.
   *
   * To help avoid unplanned outages, we recommend that you disable the service
   * account before you delete it. Use
   * [DisableServiceAccount][google.iam.admin.v1.IAM.DisableServiceAccount] to
   * disable the service account, then wait at least 24 hours and watch for
   * unintended consequences. If there are no unintended consequences, you can
   * delete the service account.
   *
   * @param name  Required. The resource name of the service account in the
   * following format: `projects/{PROJECT_ID}/serviceAccounts/{ACCOUNT}`. Using
   * `-` as a wildcard for the `PROJECT_ID` will infer the project from the
   * account. The `ACCOUNT` value can be the `email` address or the `unique_id`
   * of the service account.
   */
  Status DeleteServiceAccount(std::string const& name);

  /**
   * Lists every [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey] for
   * a service account.
   *
   * @param name  Required. The resource name of the service account in the
   * following format: `projects/{PROJECT_ID}/serviceAccounts/{ACCOUNT}`. Using
   * `-` as a wildcard for the `PROJECT_ID`, will infer the project from the
   * account. The `ACCOUNT` value can be the `email` address or the `unique_id`
   * of the service account.
   * @param key_types  Filters the types of keys the user wants to include in
   * the list response. Duplicate key types are not allowed. If no key type is
   * provided, all keys are returned.
   * @return
   * [google::iam::admin::v1::ListServiceAccountKeysResponse](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L692)
   */
  StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(
      std::string const& name,
      std::vector<
          google::iam::admin::v1::ListServiceAccountKeysRequest::KeyType> const&
          key_types);

  /**
   * Gets a [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey].
   *
   * @param name  Required. The resource name of the service account key in the
   * following format:
   *  `projects/{PROJECT_ID}/serviceAccounts/{ACCOUNT}/keys/{key}`.
   *  Using `-` as a wildcard for the `PROJECT_ID` will infer the project from
   *  the account. The `ACCOUNT` value can be the `email` address or the
   *  `unique_id` of the service account.
   * @param public_key_type  The output format of the public key requested.
   *  X509_PEM is the default output format.
   * @return
   * [google::iam::admin::v1::ServiceAccountKey](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L741)
   */
  StatusOr<google::iam::admin::v1::ServiceAccountKey> GetServiceAccountKey(
      std::string const& name,
      google::iam::admin::v1::ServiceAccountPublicKeyType public_key_type);

  /**
   * Creates a [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey].
   *
   * @param name  Required. The resource name of the service account in the
   * following format: `projects/{PROJECT_ID}/serviceAccounts/{ACCOUNT}`. Using
   * `-` as a wildcard for the `PROJECT_ID` will infer the project from the
   * account. The `ACCOUNT` value can be the `email` address or the `unique_id`
   * of the service account.
   * @param private_key_type  The output format of the private key. The default
   * value is `TYPE_GOOGLE_CREDENTIALS_FILE`, which is the Google Credentials
   * File format.
   * @param key_algorithm  Which type of key and algorithm to use for the key.
   *  The default is currently a 2K RSA key.  However this may change in the
   *  future.
   * @return
   * [google::iam::admin::v1::ServiceAccountKey](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L741)
   */
  StatusOr<google::iam::admin::v1::ServiceAccountKey> CreateServiceAccountKey(
      std::string const& name,
      google::iam::admin::v1::ServiceAccountPrivateKeyType private_key_type,
      google::iam::admin::v1::ServiceAccountKeyAlgorithm key_algorithm);

  /**
   * Deletes a [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey].
   * Deleting a service account key does not revoke short-lived credentials that
   * have been issued based on the service account key.
   *
   * @param name  Required. The resource name of the service account key in the
   * following format:
   *  `projects/{PROJECT_ID}/serviceAccounts/{ACCOUNT}/keys/{key}`.
   *  Using `-` as a wildcard for the `PROJECT_ID` will infer the project from
   *  the account. The `ACCOUNT` value can be the `email` address or the
   *  `unique_id` of the service account.
   */
  Status DeleteServiceAccountKey(std::string const& name);

  /**
   * Gets the IAM policy that is attached to a
   * [ServiceAccount][google.iam.admin.v1.ServiceAccount]. This IAM policy
   * specifies which members have access to the service account.
   *
   * This method does not tell you whether the service account has been granted
   * any roles on other resources. To check whether a service account has role
   * grants on a resource, use the `getIamPolicy` method for that resource. For
   * example, to view the role grants for a project, call the Resource Manager
   * API's
   * [`projects.getIamPolicy`](https://cloud.google.com/resource-manager/reference/rest/v1/projects/getIamPolicy)
   * method.
   *
   * @param resource  REQUIRED: The resource for which the policy is being
   * requested. See the operation documentation for the appropriate value for
   * this field.
   * @return
   * [google::iam::v1::Policy](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/policy.proto#L88)
   */
  StatusOr<google::iam::v1::Policy> GetIamPolicy(std::string const& resource);

  /**
   * Sets the IAM policy that is attached to a
   * [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * Use this method to grant or revoke access to the service account. For
   * example, you could grant a member the ability to impersonate the service
   * account.
   *
   * This method does not enable the service account to access other resources.
   * To grant roles to a service account on a resource, follow these steps:
   *
   * 1. Call the resource's `getIamPolicy` method to get its current IAM policy.
   * 2. Edit the policy so that it binds the service account to an IAM role for
   * the resource.
   * 3. Call the resource's `setIamPolicy` method to update its IAM policy.
   *
   * For detailed instructions, see
   * [Granting roles to a service account for specific
   * resources](https://cloud.google.com/iam/help/service-accounts/granting-access-to-service-accounts).
   *
   * @param resource  REQUIRED: The resource for which the policy is being
   * specified. See the operation documentation for the appropriate value for
   * this field.
   * @param policy  REQUIRED: The complete policy to be applied to the
   * `resource`. The size of the policy is limited to a few 10s of KB. An empty
   * policy is a valid policy but certain Cloud Platform services (such as
   * Projects) might reject them.
   * @return
   * [google::iam::v1::Policy](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/policy.proto#L88)
   */
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      std::string const& resource, google::iam::v1::Policy const& policy);

  /**
   * Tests whether the caller has the specified permissions on a
   * [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * @param resource  REQUIRED: The resource for which the policy detail is
   * being requested. See the operation documentation for the appropriate value
   * for this field.
   * @param permissions  The set of permissions to check for the `resource`.
   * Permissions with wildcards (such as '*' or 'storage.*') are not allowed.
   * For more information see [IAM
   * Overview](https://cloud.google.com/iam/docs/overview#permissions).
   * @return
   * [google::iam::v1::TestIamPermissionsResponse](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/iam_policy.proto#L141)
   */
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      std::string const& resource, std::vector<std::string> const& permissions);

  /**
   * Lists roles that can be granted on a Google Cloud resource. A role is
   * grantable if the IAM policy for the resource can contain bindings to the
   * role.
   *
   * @param full_resource_name  Required. The full resource name to query from
   * the list of grantable roles. The name follows the Google Cloud Platform
   * resource format. For example, a Cloud Platform project with id `my-project`
   * will be named
   *  `//cloudresourcemanager.googleapis.com/projects/my-project`.
   */
  StreamRange<google::iam::admin::v1::Role> QueryGrantableRoles(
      std::string const& full_resource_name);

  /**
   * Lists every [ServiceAccount][google.iam.admin.v1.ServiceAccount] that
   * belongs to a specific project.
   *
   * @param request
   * [google::iam::admin::v1::ListServiceAccountsRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L544)
   */
  StreamRange<google::iam::admin::v1::ServiceAccount> ListServiceAccounts(
      google::iam::admin::v1::ListServiceAccountsRequest request);

  /**
   * Gets a [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * @param request
   * [google::iam::admin::v1::GetServiceAccountRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L579)
   * @return
   * [google::iam::admin::v1::ServiceAccount](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L461)
   */
  StatusOr<google::iam::admin::v1::ServiceAccount> GetServiceAccount(
      google::iam::admin::v1::GetServiceAccountRequest const& request);

  /**
   * Creates a [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * @param request
   * [google::iam::admin::v1::CreateServiceAccountRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L521)
   * @return
   * [google::iam::admin::v1::ServiceAccount](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L461)
   */
  StatusOr<google::iam::admin::v1::ServiceAccount> CreateServiceAccount(
      google::iam::admin::v1::CreateServiceAccountRequest const& request);

  /**
   * Patches a [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * @param request
   * [google::iam::admin::v1::PatchServiceAccountRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L616)
   * @return
   * [google::iam::admin::v1::ServiceAccount](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L461)
   */
  StatusOr<google::iam::admin::v1::ServiceAccount> PatchServiceAccount(
      google::iam::admin::v1::PatchServiceAccountRequest const& request);

  /**
   * Deletes a [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * **Warning:** After you delete a service account, you might not be able to
   * undelete it. If you know that you need to re-enable the service account in
   * the future, use
   * [DisableServiceAccount][google.iam.admin.v1.IAM.DisableServiceAccount]
   * instead.
   *
   * If you delete a service account, IAM permanently removes the service
   * account 30 days later. Google Cloud cannot recover the service account
   * after it is permanently removed, even if you file a support request.
   *
   * To help avoid unplanned outages, we recommend that you disable the service
   * account before you delete it. Use
   * [DisableServiceAccount][google.iam.admin.v1.IAM.DisableServiceAccount] to
   * disable the service account, then wait at least 24 hours and watch for
   * unintended consequences. If there are no unintended consequences, you can
   * delete the service account.
   *
   * @param request
   * [google::iam::admin::v1::DeleteServiceAccountRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L594)
   */
  Status DeleteServiceAccount(
      google::iam::admin::v1::DeleteServiceAccountRequest const& request);

  /**
   * Restores a deleted [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * **Important:** It is not always possible to restore a deleted service
   * account. Use this method only as a last resort.
   *
   * After you delete a service account, IAM permanently removes the service
   * account 30 days later. There is no way to restore a deleted service account
   * that has been permanently removed.
   *
   * @param request
   * [google::iam::admin::v1::UndeleteServiceAccountRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L623)
   * @return
   * [google::iam::admin::v1::UndeleteServiceAccountResponse](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L631)
   */
  StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
  UndeleteServiceAccount(
      google::iam::admin::v1::UndeleteServiceAccountRequest const& request);

  /**
   * Enables a [ServiceAccount][google.iam.admin.v1.ServiceAccount] that was
   * disabled by
   * [DisableServiceAccount][google.iam.admin.v1.IAM.DisableServiceAccount].
   *
   * If the service account is already enabled, then this method has no effect.
   *
   * If the service account was disabled by other means—for example, if Google
   * disabled the service account because it was compromised—you cannot use this
   * method to enable the service account.
   *
   * @param request
   * [google::iam::admin::v1::EnableServiceAccountRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L637)
   */
  Status EnableServiceAccount(
      google::iam::admin::v1::EnableServiceAccountRequest const& request);

  /**
   * Disables a [ServiceAccount][google.iam.admin.v1.ServiceAccount]
   * immediately.
   *
   * If an application uses the service account to authenticate, that
   * application can no longer call Google APIs or access Google Cloud
   * resources. Existing access tokens for the service account are rejected, and
   * requests for new access tokens will fail.
   *
   * To re-enable the service account, use
   * [EnableServiceAccount][google.iam.admin.v1.IAM.EnableServiceAccount]. After
   * you re-enable the service account, its existing access tokens will be
   * accepted, and you can request new access tokens.
   *
   * To help avoid unplanned outages, we recommend that you disable the service
   * account before you delete it. Use this method to disable the service
   * account, then wait at least 24 hours and watch for unintended consequences.
   * If there are no unintended consequences, you can delete the service account
   * with [DeleteServiceAccount][google.iam.admin.v1.IAM.DeleteServiceAccount].
   *
   * @param request
   * [google::iam::admin::v1::DisableServiceAccountRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L647)
   */
  Status DisableServiceAccount(
      google::iam::admin::v1::DisableServiceAccountRequest const& request);

  /**
   * Lists every [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey] for
   * a service account.
   *
   * @param request
   * [google::iam::admin::v1::ListServiceAccountKeysRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L657)
   * @return
   * [google::iam::admin::v1::ListServiceAccountKeysResponse](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L692)
   */
  StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(
      google::iam::admin::v1::ListServiceAccountKeysRequest const& request);

  /**
   * Gets a [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey].
   *
   * @param request
   * [google::iam::admin::v1::GetServiceAccountKeyRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L698)
   * @return
   * [google::iam::admin::v1::ServiceAccountKey](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L741)
   */
  StatusOr<google::iam::admin::v1::ServiceAccountKey> GetServiceAccountKey(
      google::iam::admin::v1::GetServiceAccountKeyRequest const& request);

  /**
   * Creates a [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey].
   *
   * @param request
   * [google::iam::admin::v1::CreateServiceAccountKeyRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L791)
   * @return
   * [google::iam::admin::v1::ServiceAccountKey](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L741)
   */
  StatusOr<google::iam::admin::v1::ServiceAccountKey> CreateServiceAccountKey(
      google::iam::admin::v1::CreateServiceAccountKeyRequest const& request);

  /**
   * Creates a [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey], using
   * a public key that you provide.
   *
   * @param request
   * [google::iam::admin::v1::UploadServiceAccountKeyRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L816)
   * @return
   * [google::iam::admin::v1::ServiceAccountKey](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L741)
   */
  StatusOr<google::iam::admin::v1::ServiceAccountKey> UploadServiceAccountKey(
      google::iam::admin::v1::UploadServiceAccountKeyRequest const& request);

  /**
   * Deletes a [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey].
   * Deleting a service account key does not revoke short-lived credentials that
   * have been issued based on the service account key.
   *
   * @param request
   * [google::iam::admin::v1::DeleteServiceAccountKeyRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L832)
   */
  Status DeleteServiceAccountKey(
      google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request);

  /**
   * Gets the IAM policy that is attached to a
   * [ServiceAccount][google.iam.admin.v1.ServiceAccount]. This IAM policy
   * specifies which members have access to the service account.
   *
   * This method does not tell you whether the service account has been granted
   * any roles on other resources. To check whether a service account has role
   * grants on a resource, use the `getIamPolicy` method for that resource. For
   * example, to view the role grants for a project, call the Resource Manager
   * API's
   * [`projects.getIamPolicy`](https://cloud.google.com/resource-manager/reference/rest/v1/projects/getIamPolicy)
   * method.
   *
   * @param request
   * [google::iam::v1::GetIamPolicyRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/iam_policy.proto#L113)
   * @return
   * [google::iam::v1::Policy](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/policy.proto#L88)
   */
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  /**
   * Sets the IAM policy that is attached to a
   * [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * Use this method to grant or revoke access to the service account. For
   * example, you could grant a member the ability to impersonate the service
   * account.
   *
   * This method does not enable the service account to access other resources.
   * To grant roles to a service account on a resource, follow these steps:
   *
   * 1. Call the resource's `getIamPolicy` method to get its current IAM policy.
   * 2. Edit the policy so that it binds the service account to an IAM role for
   * the resource.
   * 3. Call the resource's `setIamPolicy` method to update its IAM policy.
   *
   * For detailed instructions, see
   * [Granting roles to a service account for specific
   * resources](https://cloud.google.com/iam/help/service-accounts/granting-access-to-service-accounts).
   *
   * @param request
   * [google::iam::v1::SetIamPolicyRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/iam_policy.proto#L98)
   * @return
   * [google::iam::v1::Policy](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/policy.proto#L88)
   */
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  /**
   * Tests whether the caller has the specified permissions on a
   * [ServiceAccount][google.iam.admin.v1.ServiceAccount].
   *
   * @param request
   * [google::iam::v1::TestIamPermissionsRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/iam_policy.proto#L126)
   * @return
   * [google::iam::v1::TestIamPermissionsResponse](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/v1/iam_policy.proto#L141)
   */
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  /**
   * Lists roles that can be granted on a Google Cloud resource. A role is
   * grantable if the IAM policy for the resource can contain bindings to the
   * role.
   *
   * @param request
   * [google::iam::admin::v1::QueryGrantableRolesRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1062)
   */
  StreamRange<google::iam::admin::v1::Role> QueryGrantableRoles(
      google::iam::admin::v1::QueryGrantableRolesRequest request);

  /**
   * Lists every predefined [Role][google.iam.admin.v1.Role] that IAM supports,
   * or every custom role that is defined for an organization or project.
   *
   * @param request
   * [google::iam::admin::v1::ListRolesRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1093)
   */
  StreamRange<google::iam::admin::v1::Role> ListRoles(
      google::iam::admin::v1::ListRolesRequest request);

  /**
   * Gets the definition of a [Role][google.iam.admin.v1.Role].
   *
   * @param request
   * [google::iam::admin::v1::GetRoleRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1152)
   * @return
   * [google::iam::admin::v1::Role](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1004)
   */
  StatusOr<google::iam::admin::v1::Role> GetRole(
      google::iam::admin::v1::GetRoleRequest const& request);

  /**
   * Creates a new custom [Role][google.iam.admin.v1.Role].
   *
   * @param request
   * [google::iam::admin::v1::CreateRoleRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1184)
   * @return
   * [google::iam::admin::v1::Role](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1004)
   */
  StatusOr<google::iam::admin::v1::Role> CreateRole(
      google::iam::admin::v1::CreateRoleRequest const& request);

  /**
   * Updates the definition of a custom [Role][google.iam.admin.v1.Role].
   *
   * @param request
   * [google::iam::admin::v1::UpdateRoleRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1219)
   * @return
   * [google::iam::admin::v1::Role](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1004)
   */
  StatusOr<google::iam::admin::v1::Role> UpdateRole(
      google::iam::admin::v1::UpdateRoleRequest const& request);

  /**
   * Deletes a custom [Role][google.iam.admin.v1.Role].
   *
   * When you delete a custom role, the following changes occur immediately:
   *
   * * You cannot bind a member to the custom role in an IAM
   * [Policy][google.iam.v1.Policy].
   * * Existing bindings to the custom role are not changed, but they have no
   * effect.
   * * By default, the response from
   * [ListRoles][google.iam.admin.v1.IAM.ListRoles] does not include the custom
   * role.
   *
   * You have 7 days to undelete the custom role. After 7 days, the following
   * changes occur:
   *
   * * The custom role is permanently deleted and cannot be recovered.
   * * If an IAM policy contains a binding to the custom role, the binding is
   * permanently removed.
   *
   * @param request
   * [google::iam::admin::v1::DeleteRoleRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1250)
   * @return
   * [google::iam::admin::v1::Role](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1004)
   */
  StatusOr<google::iam::admin::v1::Role> DeleteRole(
      google::iam::admin::v1::DeleteRoleRequest const& request);

  /**
   * Undeletes a custom [Role][google.iam.admin.v1.Role].
   *
   * @param request
   * [google::iam::admin::v1::UndeleteRoleRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1278)
   * @return
   * [google::iam::admin::v1::Role](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1004)
   */
  StatusOr<google::iam::admin::v1::Role> UndeleteRole(
      google::iam::admin::v1::UndeleteRoleRequest const& request);

  /**
   * Lists every permission that you can test on a resource. A permission is
   * testable if you can check whether a member has that permission on the
   * resource.
   *
   * @param request
   * [google::iam::admin::v1::QueryTestablePermissionsRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1361)
   */
  StreamRange<google::iam::admin::v1::Permission> QueryTestablePermissions(
      google::iam::admin::v1::QueryTestablePermissionsRequest request);

  /**
   * Returns a list of services that allow you to opt into audit logs that are
   * not generated by default.
   *
   * To learn more about audit logs, see the [Logging
   * documentation](https://cloud.google.com/logging/docs/audit).
   *
   * @param request
   * [google::iam::admin::v1::QueryAuditableServicesRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1391)
   * @return
   * [google::iam::admin::v1::QueryAuditableServicesResponse](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1402)
   */
  StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
  QueryAuditableServices(
      google::iam::admin::v1::QueryAuditableServicesRequest const& request);

  /**
   * Lints, or validates, an IAM policy. Currently checks the
   * [google.iam.v1.Binding.condition][google.iam.v1.Binding.condition] field,
   * which contains a condition expression for a role binding.
   *
   * Successful calls to this method always return an HTTP `200 OK` status code,
   * even if the linter detects an issue in the IAM policy.
   *
   * @param request
   * [google::iam::admin::v1::LintPolicyRequest](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1415)
   * @return
   * [google::iam::admin::v1::LintPolicyResponse](https://github.com/googleapis/googleapis/blob/80f404215a9346259db760d80d0671f28c433453/google/iam/admin/v1/iam.proto#L1513)
   */
  StatusOr<google::iam::admin::v1::LintPolicyResponse> LintPolicy(
      google::iam::admin::v1::LintPolicyRequest const& request);

 private:
  std::shared_ptr<IAMConnection> connection_;
};

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace iam
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CLIENT_H

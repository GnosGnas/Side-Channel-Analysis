# CONTRIBUTION GUIDELINE



## Creating an Issue

1. While creating an issue make sure to keep the title simple.
2. Please elaborate on the issue in the description as much as possible in depth.
3. Please assign the issue to a valid user you know could resolve the issue.
4. Assign a due-date to the issue.
5. assign an applicable label to the issue.
6. Assign a milestone if necessary.

## Creating a Merge Request

1. Open an issue using the steps mentioned above about the pull-request
2. Create a merge-request from the issue-page itself
3. Assign one of the following labels - `bump-major`, `bump-minor`, `bump-patch`
4. Develop and push commits on the new branch
5. Once ready to merge, assign an approver and resolve the WIP status.
6. Do not squash-commits and always delete branch.

## Commit Discipline

1. Please make commits with small changes - makes it easy to review and follow
2. Please be elaborate in your commit messages - it costs nothing
3. Do not `skip-ci` or its variants in the commit-message. Doing so, will skip the pipeline and thus
cause the version update to be out of sync.

## How versioning happens?

Master is updated only through merge-requests which follow the above discipline.
The labels `bump-major`, `bump-minor` and `bump-patch` are absolutely necessary labels
for any merge-request since they define the next version number. The repository follows 
the simple [semantic versioning scheme](https://semver.org/).

If no git tag is available, the first version update will result in version 1.0.0. If git tags are available, it will determine whether to do a major, minor, or patch update based on specific merge request labels. The bump-minor and bump-major labels exist to do either a minor or major bump. If a merge request has no labels attached, it will perform a patch update by default.



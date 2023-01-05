#include <aws/lambda-runtime/runtime.h>


auto handler(aws::lambda_runtime::invocation_request const & /* request */) -> aws::lambda_runtime::invocation_response
{
    return aws::lambda_runtime::invocation_response::success(R"({"result":"success","size":"great"})", "application/json");
}

auto main() -> int
{
    aws::lambda_runtime::run_handler(handler);

    return 0;
}

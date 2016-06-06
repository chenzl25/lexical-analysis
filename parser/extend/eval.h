#ifndef EVAL_H
#define EVAL_H
#include "crowbar_type.h"
#include "crowbar.h"
void eval_binary_int(CRB_TYPE::ExpressionType op,
                    int left, int right,
                    CRB_TYPE::Value *&result, int line_number);
void eval_binary_double(CRB_TYPE::ExpressionType op,
                   double left, double right,
                   CRB_TYPE::Value *&result, int line_number);
void eval_binary_numeric(CRB_TYPE::ExpressionType op,
                        CRB_TYPE::Value *left_val, CRB_TYPE::Value *right_val,
                        CRB_TYPE::Value *&result, int line_number);
void eval_binary_boolean(CRB_TYPE::ExpressionType op,
                         CRB_TYPE::Value *left_value, CRB_TYPE::Value *right_value, 
                         CRB_TYPE::Value *&result_value, int line_number);
void chain_string(CRB_TYPE::Value *left_value, CRB_TYPE::Value *right_value, 
                         CRB_TYPE::Value *&result_value, int line_number);
CRB_TYPE::Value* get_lvalue(Expression* expression);
void do_assign(CRB_TYPE::Value* src, CRB_TYPE::Value* dest, 
               CRB_TYPE::ExpressionType type, int line_number);
#endif
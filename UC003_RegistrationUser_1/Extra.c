Extra()
{
	return 0;
}


Check(int status, char *tr_name)
{
	if(status == LR_FAIL){
		lr_error_message("�������� ������");
		lr_end_transaction(tr_name, LR_FAIL);
		lr_end_transaction("MAIN_RegistrationUser_1", LR_FAIL);
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE, LR_FAIL);
	}
	
	return 0;
}
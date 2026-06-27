int __usercall sub_6F6975B0@<eax>(int ebp0@<ebp>, int a1)
{
  int result; // eax@4

  dword_6FD40E10 = a1;
  switch ( a1 )
  {
    case 0:
      nullsub_10();
      if ( !dword_6FBB8524 )
        goto LABEL_10;
      ShowCursor(0);
      goto LABEL_4;
    case 2:
      result = sub_6F697340();
      break;
    case 3:
      sub_6F732260();
      sub_6F761860(&dword_6FD40974);
      sub_6F761860(&dword_6FD40970);
      sub_6F761860(&dword_6FD4096C);
      sub_6F75A490(&dword_6FD40978);
      sub_6F7616C0();
      sub_6F75A010();
      nullsub_9();
      result = 0;
      break;
    case 4294967294:
      result = sub_6F6A3A90();
      break;
    case 4294967295:
      result = sub_6F6A8400(ebp0);
      break;
    case 1:
      nullsub_10();
LABEL_10:
      ShowCursor(1);
      result = 0;
      break;
    default:
LABEL_4:
      result = 0;
      break;
  }
  return result;
}

int sub_6F6A8040()
{
  int result; // eax@5

  if ( dword_6FBB755C && dword_6FBB9584 == 1 )
  {
    dword_6FD413F8 = sub_6F69F380;
    dword_6FD413FC = sub_6F69F440;
    dword_6FD41400 = sub_6F69F4F0;
  }
  else if ( dword_6FBB52F4 == 1 )
  {
    dword_6FD413F8 = sub_6F69F2D0;
    dword_6FD413FC = sub_6F69F250;
    dword_6FD41400 = sub_6F69F1E0;
  }
  else
  {
    dword_6FD413F8 = sub_6F69F130;
    dword_6FD413FC = sub_6F69F080;
    dword_6FD41400 = sub_6F69EFE0;
  }
  result = dword_6FBB9568;
  dword_6FBBFE44 = sub_6F69EF70;
  dword_6FBBFE40 = sub_6F69EF30;
  dword_6FBBFE48 = sub_6F69EF00;
  if ( dword_6FBB9568 )
  {
    dword_6FBBFE44 = sub_6F69EFB0;
    dword_6FBBFE40 = sub_6F69EFB0;
    dword_6FBBFE48 = sub_6F69EFB0;
  }
  return result;
}

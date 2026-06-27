int __usercall sub_6F8C59A0@<eax>(char a1@<zf>, int a2@<ecx>)
{
  int result; // eax@3

  _InterlockedSub((volatile signed __int32 *)(a2 + 4), 1u);
  if ( a1 )
    result = (*(int (**)(void))(*(_DWORD *)a2 + 4))();
  return result;
}

int __usercall sub_6F8A1880@<eax>(int *a1@<eax>)
{
  int *v1; // ebx@1
  int v2; // esi@1
  int v3; // eax@1
  int v4; // edx@4
  int v5; // ebp@4
  int v6; // et1@4
  int result; // eax@4
  int v8; // ebp@5
  int v9; // et1@5

  v1 = a1;
  v2 = *a1;
  v3 = dword_6FB48A44;
  if ( dword_6FB48A44 < 0 )
  {
    sub_6F8A1780();
    v3 = dword_6FB48A44;
  }
  if ( v3 )
  {
    sub_6F8B4920(dword_70372B88, v2);
    v8 = *(_DWORD *)(*v1 + 32);
    v9 = *(_DWORD *)(*v1 + 40);
    result = (*(int (**)(void))(*v1 + 36))();
  }
  else
  {
    v4 = *v1;
    dword_70372B8C = v2;
    v5 = *(_DWORD *)(v4 + 32);
    v6 = *(_DWORD *)(v4 + 40);
    result = (*(int (**)(void))(v4 + 36))();
  }
  return result;
}

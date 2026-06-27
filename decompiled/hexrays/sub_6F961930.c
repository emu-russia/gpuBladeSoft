void __thiscall sub_6F961930(char *this)
{
  char *v1; // ecx@1
  char *v2; // eax@1
  char *v3; // ebx@1

  v1 = &this[*(_DWORD *)(*(_DWORD *)this - 12)];
  v2 = (char *)*((_DWORD *)v1 + 10);
  v3 = v1;
  *(_DWORD *)v1 = off_6FBAFF14;
  *((_DWORD *)v1 + 16) = off_6FBAFF28;
  *((_DWORD *)v1 + 1) = off_6FBAFC20;
  if ( v2 != v1 + 48 )
    j_free_1(v2);
  *((_DWORD *)v3 + 1) = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)v3 + 8);
  *(_DWORD *)v3 = dword_6FBABC10;
  *((_DWORD *)v3 + 16) = off_6FBB0FC0;
  sub_6F956920((_DWORD *)v3 + 16);
}

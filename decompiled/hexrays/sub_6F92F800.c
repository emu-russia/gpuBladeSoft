void __usercall sub_6F92F800(char a1@<zf>, int a2@<ecx>)
{
  int v2; // ebx@3
  void (*v3)(void); // eax@3
  bool v4; // zf@3
  int (__thiscall *v5)(void *); // edx@7

  _InterlockedSub((volatile signed __int32 *)(a2 + 4), 1u);
  if ( a1 )
  {
    v2 = a2;
    v3 = *(void (**)(void))(*(_DWORD *)a2 + 8);
    v4 = (char *)v3 == (char *)nullsub_15;
    if ( (char *)v3 != (char *)nullsub_15 )
      v3();
    _InterlockedSub((volatile signed __int32 *)(v2 + 8), 1u);
    if ( v4 )
    {
      v5 = *(int (__thiscall **)(void *))(*(_DWORD *)v2 + 12);
      if ( v5 == sub_6F92F7F0 )
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(v2);
      else
        v5((void *)v2);
    }
  }
}

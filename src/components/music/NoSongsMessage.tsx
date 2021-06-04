import React, { useCallback, useState } from "react";
import { useDispatch } from "react-redux";
import l10n from "lib/helpers/l10n";

import settingsActions from "store/features/settings/settingsActions";
import { SettingsState } from "store/features/settings/settingsState";
import { Button } from "ui/buttons/Button";

export const NoSongsMessage = () => {
  const dispatch = useDispatch();
  const [showMessage, setShowMessage] = useState(false);

  const editSettings = useCallback(
    (patch: Partial<SettingsState>) => {
      dispatch(settingsActions.editSettings(patch));
    },
    [dispatch]
  );

  return (
    <>
      <h2>{l10n("MESSAGE_NO_SONGS_FOUND")}</h2>
      <p>{l10n("MESSAGE_ADD_UGE_FILES")}</p>
      <p
        onClick={() => setShowMessage(!showMessage)}
        style={{ textDecoration: "underline", cursor: "pointer" }}
      >
        {l10n("MESSAGE_WHAT_ABOUT_MOD")}
      </p>
      {showMessage ? (
        <>
          <p>{l10n("MESSAGE_USE_MOD_FILES")}</p>
          <Button onClick={() => editSettings({ musicDriver: "gbt" })}>
            {l10n("MESSAGE_ENABLE_GBT")}
          </Button>
        </>
      ) : (
        ""
      )}
    </>
  );
};